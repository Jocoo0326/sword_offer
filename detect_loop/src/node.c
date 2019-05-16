#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "node.h"

int add(Node **pHead, int value)
{
  if (pHead == NULL) {
    return -1;
  }
  Node *prev = NULL, *next = *pHead;
  while (next) {
    prev = next;
    next = next->pNext;
  }
  Node *node = (Node *) malloc(sizeof(Node));
  if (node < 0) {
    perror("create node failed");
    return -1;
  }
  node->data = value;
  if (prev == NULL) {
    node->pNext = NULL;
    *pHead = node;
  } else {
    prev->pNext = node;
  }
  return 0;
}
