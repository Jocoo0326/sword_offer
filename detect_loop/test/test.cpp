#include <gtest/gtest.h>
#include "../src/node.h"
#include "../src/detect_loop.h"

#define N 11
#define START 4

TEST(testDetectLoop, test1) {
  Node *pHead = NULL;
  int i = 0;
  for (i = 0; i < N; ++i) {
    add(&pHead, i);
  }

  Node *p = pHead;
  Node *start = NULL;
  for (i = 0; i < N; ++i) {
    ASSERT_TRUE(p != NULL);
    ASSERT_EQ(p->data, i);
    if (i != N - 1) {
      if (i == START) {
        start = p;
      }
      p = p->pNext;
    }
  }
  ASSERT_EQ(p->pNext, nullptr);

  p->pNext = start;
  Node *loop;
  ASSERT_EQ(detect_loop(&pHead, &loop), 1);
  ASSERT_EQ(loop->data, START);
}
