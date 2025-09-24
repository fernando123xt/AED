#include "list.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
  struct Node* head = buildWithDummyNode();
  pushEndWithDummyNode(&head,10);
  printList(head);
  return 0;
}
