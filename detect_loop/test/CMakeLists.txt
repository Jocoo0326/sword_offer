# include_directories (../src)

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -g")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g")


add_executable (utest
  main.cpp
  ../src/node.c
  ../src/detect_loop.c
  test.cpp)

target_link_libraries (utest
  gtest
  pthread)

add_test (NAME unit
  COMMAND ${CMAKE_BINARY_DIR}/test/utest
  )
