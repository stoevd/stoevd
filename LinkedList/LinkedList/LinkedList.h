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

void DestroyNode(Node *, Node *);

int Count(Node *, int);

int GetNth(Node *, int);

void DeleteList(struct Node **);

int Pop(struct Node **);

void InsertNth(struct Node **, int, int);

void SortedInsert(struct Node **, struct Node *);

void InsertSort(struct Node **);

void Append(struct Node **, struct Node **);

void FrontBackSplit(struct Node *, struct Node **, struct Node **);

void RemoveDuplicates(struct Node *);