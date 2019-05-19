cmake_minimum_required (VERSION 3.0)

project (sword_offer)
set (CMAKE_CXX_STANDARD 11)

set (GTEST_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../googletest")
add_subdirectory (${GTEST_DIR} gtest)
add_subdirectory (src)

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()
