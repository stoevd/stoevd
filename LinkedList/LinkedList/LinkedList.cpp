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
	}
}

void SortedInsert(struct node **headRef, struct node *newNode)
{

}