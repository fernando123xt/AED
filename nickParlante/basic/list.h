#ifndef LIST_H
#define LIST_H
struct Node;
struct Node* buildOneTwoThree();
void printList(struct Node*);
int length(struct Node*);
void push(struct Node**,int);
void pushEnd(struct Node**,int);
void pushEndWithDummyNode(struct Node**,int);
struct Node* buildWithSpecialCase();
struct Node* buildWithDummyNode();
void deleteList(struct Node**);
void deleteList2_0(struct Node**);
int pop(struct Node**);
void insertNth(struct Node**,int,int);
void sortedInsert(struct Node** , struct Node*);
void insertSort(struct Node**);
void append(struct Node** ,struct Node**);
void frontBackSplit(struct Node*,struct Node**,struct Node**);
void removeDuplicates(struct Node*);
#endif // !LIST_h
