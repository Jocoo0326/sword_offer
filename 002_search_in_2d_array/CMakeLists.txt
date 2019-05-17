cmake_minimum_required (VERSION 3.0)

project (search_in_2d_array)

option (PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
  enable_testing()
  add_subdirectory(test)
endif(PACKAGE_TESTS)
