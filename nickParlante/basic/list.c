#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
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
void push(struct Node** head, int data){
  struct Node* newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = *head;
  *head = newNode;  
}
void pushEnd(struct Node** head,int data){
  struct Node* newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  if(*head == NULL){
    *head = newNode;
  }
  else{
    struct Node* current = *head;
    while(current->next){
      current = current->next;
    }
    current->next = newNode;
  }
}
void pushEndWithDummyNode(struct Node** head, int data){
  struct Node* newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  if(*head == NULL){
    *head = newNode;
  }
  else{
    struct Node dummyN;
    dummyN.next = *head;
    struct Node* current = &dummyN;
    while(current->next){
      current = current->next;
    }
    current->next = newNode;
  }
}
struct Node* buildWithSpecialCase(){
  struct Node* head = NULL;
  pushEnd(&head,1);
  struct Node* tail = head;
  for(int i=2;i<6;i++){
    pushEnd(&(tail->next),i);
    tail = tail->next;
  }
  return head;
}
struct Node* buildWithDummyNode(){
  struct Node dummyN;
  struct Node* tail = &dummyN;
  dummyN.next = NULL;
  for(int i=1;i<6;i++){
    pushEnd(&(tail->next),i);
    tail = tail->next;
  }
  return dummyN.next;
}
void deleteList(struct Node** head){
  assert(*head);
  struct Node* current = *head;
  struct Node* tmp;
  while(current){
    tmp = current;
    current = current->next;
    free(tmp);
  }
  *head = NULL;
}
void deleteList2_0(struct Node** head){
  assert(*head);
  struct Node* current = *head;
  while(current){
    current = current->next;
    free(*head);
    *head = current;
  }
  //*head = NULL; inseseari
}
int pop(struct Node** head){
  assert(*head);
  int tmp = (*head)->data;
  struct Node* next = (*head)->next;
  free(*head);
  *head = next;
  return tmp;
}
void insertNth(struct Node** head, int index, int data){
  struct Node* current = *head;
  struct Node* newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  if(index == 0){
    newNode->next = *head;
    *head = newNode;
  }
  else{
    for(int i=0 ; i<index-1 ; i++){
      current = current->next;
      assert(current != NULL);
    }
    newNode->next = current->next;
    current->next = newNode;
  }
}
void sortedInsert(struct Node** head, struct Node* node){
  struct Node* current = *head;
  if(*head == NULL || (*head)->data >= node->data){
    *head = node;
  }
  else{
    while(current->next && current->next->data < node->data){
      current = current->next;
    }
    node->next = current->next;
    current->next = node;
  }
}
void insertSort(struct Node** head){
  //struct Node* next = (*head)->next;
  struct Node* current = *head;
  struct Node* result;
  while(current){
    struct Node* next = current->next;
    sortedInsert(&result,current);
    current = next;
  }
  *head = result;
}
void append(struct Node** aRef, struct Node** bRef){
  struct Node* current = *aRef;
  if(*aRef == NULL){
    *aRef = *bRef;
    *bRef = NULL;
  }
  else{
    while(current->next){
      current = current->next;
    }
    current->next = *bRef;
    *bRef = NULL;
  }
}
void frontBackSplit(struct Node* source, struct Node** frontRef, struct Node** backRef){
  struct Node* turtle;
  struct Node* rabbit;
  if(source == NULL || source->next == NULL){
    *frontRef = source;
    *backRef = NULL;
  }
  else{
    turtle = source;
    rabbit = source->next;
    while(rabbit){
      turtle = turtle->next;
      rabbit = rabbit->next;
      if(rabbit){
        rabbit = rabbit->next;
      }
    }
    *frontRef = source;
    *backRef = turtle->next;
    turtle->next  = NULL;
  }
 }

void removeDuplicates(struct Node* current){
  struct Node* next;
  if(current == NULL){
    return;
  }
  else{
    while(current->next){
      if(current->data == current->next->data){
        next = current->next;
        current->next = current->next->next;
        free(current);
      }
      else{
        current = next;
      } 
    }
}
