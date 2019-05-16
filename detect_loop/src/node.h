#ifndef NODE_H
#define NODE_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct Node {
  int data;
  struct Node *pNext;
} Node;

int add(Node **pHead, int value);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif /* NODE_H */
