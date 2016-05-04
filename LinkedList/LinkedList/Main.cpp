#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
#include "LinkedList.h"

int main()
{

	List p = NULL;
	/////////////
	//push element in head of list
	/////////////
	Push(&p, 45);
	Push(&p, 23);
	Push(&p, 45);
	Push(&p, 54);
	Push(&p, 44);
	Push(&p, 45);
	Push(&p, 51);
	Push(&(p->next), 42);


	////////////////
	//LENGTH OF LIST
	////////////////
	printf("Length = %d\n", Length(p));


	///////////
	//PRINT LIST
	//////////
	printf("Elements of list: ");
	while (p != NULL)
	{
		printf("%d  ", p->data);
		p = p->next;
	}
	printf("\n");


	///////////////////
	//DESTROY NODE
	//////////////////
	struct Node *head = NULL;
	Push(&head, 1);
	Push(&head, 2);
	Push(&head, 3);
	Push(&head, 4);
	printf("\nDeleting node %d: ", head->next->next->data);
	DestroyNode(head, head->next->next);
	while (head != NULL)
	{
		printf("%d  ", head->data);
		head = head->next;
	}
	printf("\n");


	//////////////
	//COUNT THE NUMBER OF TIMES A GIVEN INT OCCURS IN A LIST
	////////////
	Push(&p, 425);
	Push(&p, 223);
	Push(&p, 435);
	Push(&p, 454);
	Push(&p, 544);
	Push(&p, 45);
	Push(&p, 645);
	Push(&p, 511);
	Push(&p, 45);
	//Push(&(p->next), 42);

	printf("Number occurs in list = ");
	int count = Count(p, 45);
	printf("%d", count);
	printf(" times\n");


	/////////////
	//RETURNS THE DATA VALUE STORED IN THE NODE AT THE INDEX POSITION
	////////////
	int countNthPosition = GetNth(p, 8);
	printf("%d\n", countNthPosition);
}
