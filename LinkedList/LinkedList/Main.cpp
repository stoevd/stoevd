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
	DeleteList(&p);
	//////////////////
	////LENGTH OF LIST
	//////////////////
	Push(&p, 45);
	Push(&p, 23);
	Push(&p, 45);
	Push(&p, 54);
	Push(&p, 44);
	Push(&p, 45);
	Push(&p, 51);
	Push(&(p->next), 42);
	printf("\n");
	printf("Length = %d\n", Length(p));
	DeleteList(&p);
	///////////////////
	//DESTROY NODE
	//////////////////
	struct Node *head = NULL;
	Push(&head, 45);
	Push(&head, 23);
	Push(&head, 45);
	Push(&head, 54);
	Push(&head, 44);
	Push(&head, 45);
	Push(&head, 51);
	Push(&(head->next), 42);
	printf("\nDeleting node %d: ", head->next->data);
	DestroyNode(head, head->next);
	while (head != NULL)
	{
		printf("%d  ", head->data);
		head = head->next;
	}
	DeleteList(&head);
	printf("\n");
	printf("\n");
	//////////////
	//COUNT THE NUMBER OF TIMES A GIVEN INT OCCURS IN A LIST
	////////////
	struct Node * OccursNumbers = NULL;
	Push(&OccursNumbers, 45);
	Push(&OccursNumbers, 23);
	Push(&OccursNumbers, 45);
	Push(&OccursNumbers, 54);
	Push(&OccursNumbers, 44);
	Push(&OccursNumbers, 45);
	Push(&OccursNumbers, 51);
	Push(&(OccursNumbers->next), 42);
	
	printf("Number occurs in list = ");
	printf("%d", 45);
	int count = Count(OccursNumbers, 45);
	printf(" - %d", count);
	printf(" times\n");
	DeleteList(&OccursNumbers);

	/////////////
	//RETURNS THE DATA VALUE STORED IN THE NODE AT THE INDEX POSITION
	////////////
	struct Node * IndexPosition = NULL;
	Push(&IndexPosition, 45);
	Push(&IndexPosition, 23);
	Push(&IndexPosition, 45);
	Push(&IndexPosition, 54);
	Push(&IndexPosition, 44);
	Push(&IndexPosition, 45);
	Push(&IndexPosition, 51);
	Push(&(IndexPosition->next), 42);
	printf("\n");
	int countNthPosition = GetNth(IndexPosition, 6);
	printf("Index position is %d: ", 6);
	printf("Value is: %d\n", countNthPosition);
	DeleteList(&IndexPosition);

	//////////////////////////
	//DELETE LIST
	//////////////////////////
	struct Node * deleteList = NULL;
	Push(&deleteList, 45);
	Push(&deleteList, 23);
	Push(&deleteList, 45);
	Push(&deleteList, 54);
	Push(&deleteList, 44);
	Push(&deleteList, 45);
	Push(&deleteList, 51);
	Push(&(deleteList->next), 42);
	DeleteList(&deleteList);
	if (deleteList == NULL)
	{
		printf("\n");
		printf("List is epmty!");
		printf("\n");
	}
	printf("\n");

	//////////////////
	//POP
	/////////////////
	struct Node * pop = NULL;
	Push(&pop, 45);
	Push(&pop, 23);
	Push(&pop, 45);
	Push(&pop, 54);
	Push(&pop, 44);
	Push(&pop, 45);
	Push(&pop, 51);
	Push(&(pop->next), 42);
	printf("Length: %d\n", Length(pop));
	printf("\n");
	int pops = Pop(&pop);
	printf("Length after pop: %d\n", Length(pop));
	printf("\n");
	printf("Elements after pop: ");
	while (pop != NULL)
	{
		printf("%d  ", pop->data);
		pop = pop->next;
	}
	printf("\n");
	printf("\n");

	struct Node * insert = NULL;
	Push(&insert, 45);
	Push(&insert, 23);
	Push(&insert, 45);
	Push(&insert, 54);
	Push(&insert, 44);
	Push(&insert, 45);
	Push(&insert, 51);
	Push(&(insert->next), 42);
	InsertNth(&insert, 2, 777);
	printf("Inserted element is 777 list is: ");
	while (insert != NULL)
	{
		printf("%d  ", insert->data);
		insert = insert->next;
	}
}