cmake_minimum_required (VERSION 3.0)

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -g")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g")

add_executable(utest
  main.cpp
  test.cpp
  ../src/search.c)

target_link_libraries (utest
  gtest
  pthread)

add_test (NAME unit
  COMMAND ${CMAKE_BINARY_DIR}/test/utest)


