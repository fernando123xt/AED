#include "list.h"
#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* next;
};
struct Node* buildOneTwoThree(){
  struct Node* first = malloc(sizeof(struct Node));
  first->data = 1;
  first->next = malloc(sizeof(struct Node));
  first->next->data = 2;
  first->next->next = malloc(sizeof(struct Node));
  first->next->next->data = 3;
  first->next->next->next = NULL;

  return first;
}
void printList(struct Node* head){
  while (head) {
        printf(" %d",head->data);
        head = head->next;
  }
}
int length(struct Node* head){
  int cont=0;
  while(head){
    cont++;
    head = head->next;
  }
  return cont;
}
void push(struct Node* head, int data){
  struct Node* newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  struct Node**current =  &head;
  if(*current){
    while((*current)->next != NULL){
      *current = (*current)->next;
    }
    (*current)->next = newNode;
  }
}
