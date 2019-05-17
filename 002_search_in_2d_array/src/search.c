#include <stdio.h>
#include "search.h"

// array[row][col] grow in left-to-right and top-to-bottom direction
// search from top right corner
// if value > ${top-right} search in array[1~row-1][0~col-1]
// if value < ${top-right} search in array[1~row-1][1~col-1]
int search_in_2d_array(int *array, int row, int col, int value)
{
  if (array == NULL || row < 1 || col < 1) {
    return -1;
  }
  int r = 0;
  int c = col - 1;
  int topright;
  while (r < row && c >= 0) {
    topright = *((array + r*col) + c);
    if (topright < value) {
      r++;
    } else if (topright > value) {
      c--;
    } else {
      return 1;
    }
  }
  return -1;
}


