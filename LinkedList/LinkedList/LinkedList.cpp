#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
#include "LinkedList.h"

//Returns the number of nodes in the list.
int Length(List head) {
	int count = 0;

	while (head != NULL) {
		count++;
		head = head->next;
	}

	return count;
}

// add element at the head of list
void Push(List *head, int data) {
	List temp;
	temp = (List)malloc(sizeof(Node));
	temp->data = data;
	temp->next = *head;
	*head = temp;
}


void DestroyNode(Node * head, Node * n) 
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

int Count(Node * head, int searchFor) 
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

int GetNth(Node * head, int index)
{
	struct Node * current = head;
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