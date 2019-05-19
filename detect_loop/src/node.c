#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "node.h"

int add(Node **pHead, int value)
{
  if (pHead == NULL) {
    return -1;
  }

  Node *node = (Node *) malloc(sizeof(Node));
  node->data = value;
  node->pNext = NULL;
  if (!node) {
    perror("failed to malloc memory for new node");
    return -1;
  }
  if (*pHead == NULL) {
    *pHead = node;
  } else {
    Node *p = *pHead;
    while (p->pNext != NULL) {
      p = p->pNext;
    }
    p->pNext = node;
  }
  return 0;
}
