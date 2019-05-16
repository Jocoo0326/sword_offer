#include <gtest/gtest.h>
#include "../src/lib.h"

TEST(testDuplicateNumberInArray, test1) {
  int arr[] = {2, 3, 1, 0, 2, 5};
  ASSERT_EQ(find_duplicated_number_in_array(arr, sizeof(arr)/sizeof(arr[0])), 2);
}

TEST(testDuplicateNumberInArray, test2) {
  int arr[] = {2, 3, 1, 0, 3, 2, 5, 1};
  ASSERT_EQ(find_duplicated_number_in_array(arr, sizeof(arr)/sizeof(arr[0])), 3);
}

TEST(testDuplicateNumberInArray, test3) {
  int arr[] = {2, 3, 1, 0, 4, 6, 5, 7};
  ASSERT_EQ(find_duplicated_number_in_array(arr, sizeof(arr)/sizeof(arr[0])), -1);
}

TEST(testDuplicateNumberInArray, test4) {
  int arr[] = {2, 3, 1, 0, 2, 5};
  ASSERT_EQ(find_duplicated_number_in_array_with_cycles(arr, sizeof(arr)/sizeof(arr[0])), 2);
}

TEST(testDuplicateNumberInArray, test5) {
  int arr[] = {2, 3, 1, 0, 4, 2, 5, 6};
  ASSERT_EQ(find_duplicated_number_in_array_with_cycles(arr, sizeof(arr)/sizeof(arr[0])), 2);
}
