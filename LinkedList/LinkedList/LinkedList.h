#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
#include <assert.h>
#include <assert.h>
#pragma once


/* The Node structure */

struct Node {
	int data; // store the data
	struct Node *next; // point to next node
};

/* List type */
typedef Node * List;

int Length(List);

void Push(List *, int);

void DestroyNode(List, List);

int Count(List, int);

int GetNth(List, int);

void DeleteList(List*);

int Pop(List*);

void InsertNth(List*, int, int);

void SortedInsert(List*, List);

void InsertSort(List*);

void Append(List*, List*);

void FrontBackSplit(List, List*, List*);

void RemoveDuplicates(List);

void MoveNode(List *, List *);

void AlternatingSplit(List, List*, List*);

struct Node *ShuffleMerge(List, List);

struct Node *SortedMerge(List, List);

void MergeSort(List *);

List SortedIntersect(List, List);

void Reverse(List *);

void RecursiveReverse(List *);