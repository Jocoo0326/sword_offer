cmake_minimum_required (VERSION 3.0)

project (detect_loop)

set (CMAKE_CXX_STANDARD 11)

add_subdirectory (/Users/jocoo/workspace/sword_offer/googletest gtest)

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()
