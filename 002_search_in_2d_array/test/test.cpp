#include <gtest/gtest.h>

#include "../src/search.h"

#define N 5

TEST(testSearchIn2dArray, test1) {
  int array[][N] = {
                   {1,   4,  7, 11, 15},
                   {2,   5,  8, 12, 19},
                   {3,   6,  9, 16, 22},
                   {10, 13, 14, 17, 24},
                   {18, 21, 23, 26, 30},
  };
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      std::cout << array[i][j] << "\t";
    }
    std::cout << std::endl;
  }

  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 1), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 2), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 3), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 4), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 5), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 6), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 7), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 8), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 9), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 10), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 11), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 12), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 13), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 14), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 15), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 16), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 17), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 18), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 19), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 20), -1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 21), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 22), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 23), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 24), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 25), -1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 26), 1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 27), -1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 28), -1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 29), -1);
  ASSERT_EQ(search_in_2d_array((int *)array, N, N, 30), 1);
}
