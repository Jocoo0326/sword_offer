#include <assert.h>
#include <stdio.h>
#include "lib.h"

// time O(n) space O(1)
// {2, 3, 1, 0, 2, 5}
// {1, 3, 2, 0, 2, 5}
// {3, 1, 2, 0, 2, 5}
// {0, 1, 2, 3, 2, 5}
int find_duplicated_number_in_array(int input[], int len) {
  if (len < 2) {
    printf("input array size < 2\n");
    return -1;
  }
  int p = 0;
  while (p < len) {
    int curv = input[p];
    assert(curv < len);
    if (p == curv) {
      p++;
      continue;
    }
    int dest_pos_old_value = input[curv];
    if (dest_pos_old_value == curv) {
      printf("find duplicated number %d\n", curv);
      return curv;
    }
    input[curv] = curv;
    input[p] = dest_pos_old_value;
  }

  return -1;
}

// {2, 3, 1, 0, 2, 5}
// slow: 2 1 3 0 2 1
// fast: 2 3 2 3 2
// find:         2 1
int find_duplicated_number_in_array_with_cycles(int array[], int len) {
  if (len < 2) {
    printf("input array size < 2\n");
    return -1;
  }
  int slow = array[0];
  int fast = array[0];
  while (1) {
    slow = array[slow];
    fast = array[array[fast]];
    if (slow == fast) {
      break;
    }
  }
  int finder = array[0];
  while (1) {
    if (finder == slow) {
      return finder;
    }
    slow = array[slow];
    finder = array[finder];
  }
  return -1;
}
