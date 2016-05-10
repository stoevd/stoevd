#include "LinkedList.h"

int Length(Node *head) {
	int count = 0;

	while (head != NULL) {
		count++;
		head = head->next;
	}

	return count;
}

void Push(List *head, int data) {
	List temp;
	temp = (List)malloc(sizeof(Node));
	temp->data = data;
	temp->next = *head;
	*head = temp;
}

void DestroyNode(List head, List n)
{
	if (!head || !head->next)
	{
		return;
	}
	if (head == n) 
	{
		n = head->next;
		head->data = n->data;
	}
	while (head->next && head->next != n)
	{ 
		head = head->next;
	}
	if (head->next == n) 
	{
		head->next = n->next;
		delete n;
	}
	return;
}

int Count(List head, int searchFor)
{
	List current = NULL;
	current = head;
	int count = 0;
	while (current != NULL) 
	{
		if (current->data == searchFor) 
			count++;
		current = current->next;
	}
	return count;
}

int GetNth(List head, int index)
{
	List current = head;
	int count = 0;
	while (current != NULL || index > Length(head) - 1)
	{
		if (count == index)
		{
			return(current->data);
		}
		count++;
		current = current->next;
	}
	
}

void DeleteList(List *headRef)
{
	List current = *headRef;
	List head;
	while (current != NULL) 
	{
		head = current->next;
		free(current);
		current = head;
	}
	*headRef = NULL;
}

int Pop(List *headRef)
{
	List head;
	int result;
	head = *headRef;
	assert(head != NULL);
	result = head->data;
	*headRef = head->next;
	free(head);
	return(result);
}

void InsertNth(List *headRef, int index, int data)
{
	if (index == 0) 
	{ 
		Push(headRef, data);
	}
	else 
	{
		List current = *headRef;
		int i;
		for (i = 0; i < index - 1; i++) 
		{
			assert(current != NULL);
			current = current->next;
		}
		assert(current != NULL);
		Push(&(current->next), data);
	}
}

void SortedInsert(List *headRef, List newNode)
{
	/*struct Node **current = headRef;
	if ((*current)->data < newNode->data)
	{
		Push(&newNode, (*current)->data);
		current = &(*current)->next;
	}
	else
	{
		Push(&newNode, (*current)->data);
	}
}*/
	List *current = headRef;
	while (*current != NULL && (*current)->data < newNode->data) 
	{
		current = &((*current)->next);
	}
	newNode->next = *current;
	*current = newNode;
}

void InsertSort(List *headRef)
{
	List result = NULL;
	List temp;
	while (*headRef != NULL) 
	{
		temp = (*headRef)->next;
		SortedInsert(&result, (*headRef));
		*headRef = temp;
	}
	*headRef = result;
}

void Append(List *aRef, List *bRef)
{
	List temp;
	temp = *aRef;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *bRef;
	*bRef = NULL;
}

void FrontBackSplit(List source, List *frontRef, List *backRef)
{
	List current = source;
	int len = Length(source);
	int index;

	if (len < 2)
	{
		*frontRef = source;
		*backRef = NULL;
	}
	else
	{
		int count = (len - 1) / 2;
		for (index = 0; index < count; index++)
		{
			current = current->next;
		}
		*frontRef = source;
		*backRef = current->next;
		current->next = NULL;
	}
}

void RemoveDuplicates(List head)
{
	struct Node * current = head;
	//struct Node * temp = current->next->next;
	//struct Node * ref;
	while (current->next != NULL)
	{
		if (current->data == current->next->data)
		{
			List temp = current->next->next;
			free(current->next);
			current->next = temp;
		}
		else
		{
			current = current->next;
		}
	}
}


void MoveNode(List *destRef, List *sourceRef)
{
	/*assert(sourceRef != NULL); //dont work in Alternating split?
	Push(destRef, Pop(sourceRef));
	DeleteList(sourceRef);*/
	///////////////////
	/*List curr = *sourceRef;
	assert(curr != NULL);
	*sourceRef = curr->next;
	*destRef = curr;*/

	List curr = *sourceRef;
	*sourceRef = (*sourceRef)->next;
	curr->next = *destRef;
	*destRef = curr;
}

void AlternatingSplit(List source, List *aRef, List *bRef)
{
	while (source != NULL)
	{
		MoveNode(&(*aRef), &source);
		if (source != NULL)
		{
			MoveNode(&(*bRef), &source);
		}
	}
}

List ShuffleMerge(List a, List b)
{
	struct Node node;
	List curr = &node;
	node.next = NULL;
	while (a != NULL && b != NULL)
	{
		curr->next = a;
		curr = a;
		a = a->next;
		curr->next = b;
		curr = b;
		b = b->next;
	}
	return(node.next);
}

List SortedMerge(List a, List b)
{
	struct Node result;
	struct Node *curr = &result;
	result.next = NULL;
	while (true)
	{
		if (a == NULL)
		{
			curr->next = b;
			break;
		}
		else if (b == NULL)
		{
			curr->next = a;
			break;
		}
		if (a->data <= b->data)
		{
			MoveNode(&(curr->next), &a);
		}
		else
		{
			MoveNode(&(curr->next), &b);
		}
		curr = curr->next;
	}
	return (result.next);
}

void MergeSort(List *headRef)
{
	List head = *headRef;
	List a;
	List b;

	// Base case -- length 0 or 1
	if ((head == NULL) || (head->next == NULL)) {
		return;
	}
	FrontBackSplit(head, &a, &b);
	// Split head into 'a' and 'b' sublists
	// We could just as well use AlternatingSplit()
	MergeSort(&a);
	// Recursively sort the sublists
	MergeSort(&b);
	*headRef = SortedMerge(a, b);
}