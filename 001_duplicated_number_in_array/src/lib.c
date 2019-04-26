#include <assert.h>
#include <stdio.h>
#include "lib.h"

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

  // {2, 3, 1, 0, 2, 5}
  // {1, 3, 2, 0, 2, 5}
  // {3, 1, 2, 0, 2, 5}
  // {0, 1, 2, 3, 2, 5}
}
