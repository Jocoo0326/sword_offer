#include <stddef.h>
#include "detect_loop.h"
#include "node.h"

/*
 * return  1 -> detected loop
 * return  0 -> undetected loop
 * return -1 -> error
 */
int detect_loop(Node **node, Node **loopStart)
{
  if (node == NULL || *node == NULL) {
    return -1;
  }
  Node *slow = *node;
  Node *fast = *node;
  int has_loop = 0;
  while (slow != NULL && fast != NULL) {
    slow = slow->pNext;
    if (fast->pNext) {
      fast = fast->pNext->pNext;
    } else {
      break;
    }
    if (slow == fast) {
      has_loop = 1;
      break;
    }
  }
  Node *finder = *node;
  while (slow != NULL && finder != NULL) {
    slow = slow->pNext;
    finder = finder->pNext;
    if (slow == finder) {
      *loopStart = finder;
      break;
    }
  }
  return has_loop;
}
