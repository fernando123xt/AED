#include "list.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
  struct Node* head = buildOneTwoThree();
  printList(head);
  return 0;
}
