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
	printf("\n");
	printf("Length = %d\n", Length(p));
	DeleteList(&p);
	///////////////////
	//DESTROY NODE
	//////////////////
	List head = NULL;
	Push(&head, 45);
	Push(&head, 23);
	Push(&head, 45);
	Push(&head, 54);
	Push(&head, 44);
	Push(&head, 45);
	Push(&head, 51);
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
	List OccursNumbers = NULL;
	Push(&OccursNumbers, 45);
	Push(&OccursNumbers, 23);
	Push(&OccursNumbers, 45);
	Push(&OccursNumbers, 54);
	Push(&OccursNumbers, 44);
	Push(&OccursNumbers, 45);
	Push(&OccursNumbers, 51);

	printf("Number occurs in list = ");
	printf("%d", 45);
	int count = Count(OccursNumbers, 45);
	printf(" - %d", count);
	printf(" times\n");
	DeleteList(&OccursNumbers);

	/////////////
	//RETURNS THE DATA VALUE STORED IN THE NODE AT THE INDEX POSITION
	////////////
	List IndexPosition = NULL;
	Push(&IndexPosition, 45);
	Push(&IndexPosition, 23);
	Push(&IndexPosition, 45);
	Push(&IndexPosition, 54);
	Push(&IndexPosition, 44);
	Push(&IndexPosition, 45);
	Push(&IndexPosition, 51);
	printf("\n");
	int countNthPosition = GetNth(IndexPosition, 6);
	printf("Index position is %d: ", 6);
	printf("Value is: %d\n", countNthPosition);
	DeleteList(&IndexPosition);

	//////////////////////////
	//DELETE LIST
	//////////////////////////
	List deleteList = NULL;
	Push(&deleteList, 45);
	Push(&deleteList, 23);
	Push(&deleteList, 45);
	Push(&deleteList, 54);
	Push(&deleteList, 44);
	Push(&deleteList, 45);
	Push(&deleteList, 51);
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
	List pop = NULL;
	Push(&pop, 45);
	Push(&pop, 23);
	Push(&pop, 45);
	Push(&pop, 54);
	Push(&pop, 44);
	Push(&pop, 45);
	Push(&pop, 51);
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

	//////////////////////
	//INSERT N-TH POSITION
	//////////////////////
	List insert = NULL;
	Push(&insert, 45);
	Push(&insert, 23);
	Push(&insert, 45);
	Push(&insert, 54);
	Push(&insert, 44);
	Push(&insert, 45);
	Push(&insert, 51);
	InsertNth(&insert, 3, 777);
	printf("Inserted element is 777 list is: ");
	while (insert != NULL)
	{
		printf("%d  ", insert->data);
		insert = insert->next;
	}
	printf("\n");
	printf("\n");

	////////////////////////
	//SORTED INSERT
	///////////////////////
	List SortedInsert1 = NULL;
	Push(&SortedInsert1, 11);
	Push(&SortedInsert1, 10);
	Push(&SortedInsert1, 10);
	Push(&SortedInsert1, 8);
	Push(&SortedInsert1, 7);
	Push(&SortedInsert1, 6);
	Push(&SortedInsert1, 3);
	List asd = NULL;
	Push(&asd, 9);
	printf("SORTED INSERT: ");
	SortedInsert(&SortedInsert1, asd);
	while (SortedInsert1 != NULL)
	{
		printf("%d  ", SortedInsert1->data);
		SortedInsert1 = SortedInsert1->next;
	}
	printf("\n");
	printf("\n");
	////////////////////////
	////INSERT SORT
	///////////////////////
	List InsertSort1 = NULL;
	Push(&InsertSort1, 45);
	Push(&InsertSort1, 23);
	Push(&InsertSort1, 45);
	Push(&InsertSort1, 54);
	Push(&InsertSort1, 44);
	Push(&InsertSort1, 45);
	Push(&InsertSort1, 51);
	InsertSort(&InsertSort1);
	printf("Insert Sort: ");
	while (InsertSort1 != NULL)
	{
		printf("%d  ", InsertSort1->data);
		InsertSort1 = InsertSort1->next;
	}
	printf("\n");
	printf("\n");

	List append1 = NULL;
	Push(&append1, 45);
	Push(&append1, 23);
	Push(&append1, 45);
	Push(&append1, 54);
	Push(&append1, 44);
	Push(&append1, 45);
	Push(&append1, 51);
	List append2 = NULL;
	Push(&append2, 45);
	Push(&append2, 23);
	Push(&append2, 45);
	Push(&append2, 54);
	Push(&append2, 44);
	Push(&append2, 45);
	Push(&append2, 51);
	Append(&append1, &append2);
	printf("Append two lists: ");
	while (append1 != NULL)
	{
		printf("%d  ", append1->data);
		append1 = append1->next;
	}
	printf("\n");
	printf("\n");
	////////////////////////
	//FRONT BACK SPLIT
	////////////////////////
	List FrontBackSplit1 = NULL;
	Push(&FrontBackSplit1, 45);
	Push(&FrontBackSplit1, 23);
	Push(&FrontBackSplit1, 45);
	Push(&FrontBackSplit1, 54);
	Push(&FrontBackSplit1, 44);
	Push(&FrontBackSplit1, 45);
	Push(&FrontBackSplit1, 51);
	List FrontBackSplit2 = NULL;
	List FrontBackSplit3 = NULL;
	FrontBackSplit(FrontBackSplit1, &FrontBackSplit2, &FrontBackSplit3);
	printf("Split list 1 : ");
	while (FrontBackSplit2 != NULL)
	{
		printf("%d  ", FrontBackSplit2->data);
		FrontBackSplit2 = FrontBackSplit2->next;
	}
	printf("\n");
	printf("Split list 2 : ");
	while (FrontBackSplit3 != NULL)
	{
		printf("%d  ", FrontBackSplit3->data);
		FrontBackSplit3 = FrontBackSplit3->next;
	}
	printf("\n");
	printf("\n");
	//////////////////////////////
	//REMOVE DUPLICATES
	//////////////////////////////
	List RemoveDuplicates1 = NULL;
	Push(&RemoveDuplicates1, 45);
	Push(&RemoveDuplicates1, 46);
	Push(&RemoveDuplicates1, 47);
	Push(&RemoveDuplicates1, 48);
	Push(&RemoveDuplicates1, 48);
	Push(&RemoveDuplicates1, 49);
	Push(&RemoveDuplicates1, 51);
	Push(&RemoveDuplicates1, 51);
	RemoveDuplicates(RemoveDuplicates1);
	printf("List after remove duplicates: ");
	while (RemoveDuplicates1 != NULL)
	{
		printf("%d  ", RemoveDuplicates1->data);
		RemoveDuplicates1 = RemoveDuplicates1->next;
	}
	printf("\n");
	printf("\n");
	////////////////////////
	//MOVE NODE
	////////////////////////
	List MoveNode1 = NULL;
	Push(&MoveNode1, 7);
	Push(&MoveNode1, 6);
	Push(&MoveNode1, 5);
	Push(&MoveNode1, 4);
	Push(&MoveNode1, 3);
	Push(&MoveNode1, 2);
	Push(&MoveNode1, 1);
	Push(&MoveNode1, 0);
	List MoveNode2 = NULL;
	Push(&MoveNode2, 15);
	Push(&MoveNode2, 14);
	Push(&MoveNode2, 13);
	Push(&MoveNode2, 12);
	Push(&MoveNode2, 11);
	Push(&MoveNode2, 10);
	Push(&MoveNode2, 9);
	Push(&MoveNode2, 8);
	MoveNode(&MoveNode1, &MoveNode2);
	printf("Move Node List: ");
	while (MoveNode1 != NULL)
	{
		printf("%d  ", MoveNode1->data);
		MoveNode1 = MoveNode1->next;
	}
	printf("\n");
	printf("\n");
	//////////////////////////////
	////ALTERNATING SPLIT
	//////////////////////////////
	List AlternatingSplit1 = NULL;
	Push(&AlternatingSplit1, 45);
	Push(&AlternatingSplit1, 23);
	Push(&AlternatingSplit1, 45);
	Push(&AlternatingSplit1, 54);
	Push(&AlternatingSplit1, 44);
	Push(&AlternatingSplit1, 45);
	Push(&AlternatingSplit1, 51);
	List AlternatingSplit2 = NULL;
	List AlternatingSplit3 = NULL;
	AlternatingSplit(AlternatingSplit1, &AlternatingSplit2, &AlternatingSplit3);
	printf("Alternating split list 1: ");
	while (AlternatingSplit2 != NULL)
	{
		printf("%d  ", AlternatingSplit2->data);
		AlternatingSplit2 = AlternatingSplit2->next;
	}
	printf("\n");
	printf("Alternating split list 2: ");
	while (AlternatingSplit3 != NULL)
	{
		printf("%d  ", AlternatingSplit3->data);
		AlternatingSplit3 = AlternatingSplit3->next;
	}
	printf("\n");
	printf("\n");
	//////////////////////
	//SHUFFLE MERGE
	//////////////////////
	List ShuffleMerge1 = NULL;
	Push(&ShuffleMerge1, 45);
	Push(&ShuffleMerge1, 23);
	Push(&ShuffleMerge1, 45);
	Push(&ShuffleMerge1, 54);
	Push(&ShuffleMerge1, 44);
	Push(&ShuffleMerge1, 45);
	Push(&ShuffleMerge1, 51);
	List ShuffleMerge2 = NULL;
	Push(&ShuffleMerge2, 45);
	Push(&ShuffleMerge2, 23);
	Push(&ShuffleMerge2, 45);
	Push(&ShuffleMerge2, 54);
	Push(&ShuffleMerge2, 44);
	Push(&ShuffleMerge2, 45);
	Push(&ShuffleMerge2, 51);
	printf("Shuffle merge list: ");
	List ShuffleMerge3 = ShuffleMerge(ShuffleMerge1, ShuffleMerge2);
	while (ShuffleMerge3 != NULL)
	{
		printf("%d  ", ShuffleMerge3->data);
		ShuffleMerge3 = ShuffleMerge3->next;
	}
	printf("\n");
	printf("\n");
	//////////////////////
	//SORTED MERGE
	//////////////////////
	struct Node * SortedMerge1 = NULL;
	Push(&SortedMerge1, 7);
	Push(&SortedMerge1, 6);
	Push(&SortedMerge1, 5);
	Push(&SortedMerge1, 4);
	Push(&SortedMerge1, 3);
	Push(&SortedMerge1, 2);
	Push(&SortedMerge1, 1);
	struct Node * SortedMerge2 = NULL;
	Push(&SortedMerge2, 70);
	Push(&SortedMerge2, 60);
	Push(&SortedMerge2, 7);
	Push(&SortedMerge2, 6);
	Push(&SortedMerge2, 3);
	Push(&SortedMerge2, 2);
	Push(&SortedMerge2, 1);
	printf("Sorted merge list: ");
	struct Node * SortedMerge3 = SortedMerge(SortedMerge1, SortedMerge2);
	while (SortedMerge3 != NULL)
	{
		printf("%d  ", SortedMerge3->data);
		SortedMerge3 = SortedMerge3->next;
	}
	printf("\n");
	///////////////////////////
	//MERGE SORT
	//////////////////////////
	List MergeSort1 = NULL;
	Push(&MergeSort1, 45);
	Push(&MergeSort1, 23);
	Push(&MergeSort1, 45);
	Push(&MergeSort1, 54);
	Push(&MergeSort1, 44);
	Push(&MergeSort1, 45);
	Push(&MergeSort1, 51);
	MergeSort(&MergeSort1);
	printf("Merge sort: ");
	while (MergeSort1 != NULL)
	{
		printf("%d  ", MergeSort1->data);
		MergeSort1 = MergeSort1->next;
	}
	printf("\n");
}




