include_directories (../src)

add_executable (utest
  main.cpp
  ../src/lib.c
  test_lib.cpp)

target_link_libraries (utest
  gtest
  pthread)

add_test (NAME unit
  COMMAND ${CMAKE_BINARY_DIR}/test/utest
  )
