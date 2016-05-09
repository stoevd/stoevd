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

void DestroyNode(Node *head, Node *n) 
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

int Count(Node *head, int searchFor) 
{
	struct Node *current = NULL;
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

int GetNth(Node *head, int index)
{
	struct Node *current = head;
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

void DeleteList(struct Node **headRef) 
{
	struct Node *current = *headRef;
	struct Node *head;
	while (current != NULL) 
	{
		head = current->next;
		free(current);
		current = head;
	}
	*headRef = NULL;
}

int Pop(struct Node **headRef)
{
	struct Node* head;
	int result;
	head = *headRef;
	assert(head != NULL);
	result = head->data;
	*headRef = head->next;
	free(head);
	return(result);
}

void InsertNth(struct Node **headRef, int index, int data)
{
	if (index == 0) 
	{ 
		Push(headRef, data);
	}
	else 
	{
		struct Node *current = *headRef;
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

void SortedInsert(struct Node **headRef, struct Node *newNode)
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
	struct Node **current = headRef;
	while (*current != NULL && (*current)->data < newNode->data) 
	{
		current = &((*current)->next);
	}
	newNode->next = *current;
	*current = newNode;
}

void InsertSort(struct Node **headRef)
{
	struct Node *result = NULL;
	struct Node *temp;
	while (*headRef != NULL) 
	{
		temp = (*headRef)->next;
		SortedInsert(&result, (*headRef));
		*headRef = temp;
	}
	*headRef = result;
}

void Append(struct Node **aRef, struct Node **bRef)
{
	struct Node * temp;
	temp = *aRef;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *bRef;
	*bRef = NULL;
}

void FrontBackSplit(struct Node* source, struct Node** frontRef, struct Node** backRef)
{
	struct Node * current = source;
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

void RemoveDuplicates(struct Node* head)
{
	struct Node * current = head;
	//struct Node * temp = current->next->next;
	//struct Node * ref;
	while (current->next != NULL)
	{
		if (current->data == current->next->data)
		{
			struct Node * temp = current->next->next;
			free(current->next);
			current->next = temp;
		}
		else
		{
			current = current->next;
		}
	}
}