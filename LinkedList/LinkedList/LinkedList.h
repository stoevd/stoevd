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