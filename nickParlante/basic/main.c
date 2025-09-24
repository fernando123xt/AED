#include "list.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
  struct Node* head = buildWithDummyNode();
  struct Node* head2 = buildWithDummyNode();
  pushEndWithDummyNode(&head,10);
  append(&head,&head2);
  printList(head);

  return 0;
}
