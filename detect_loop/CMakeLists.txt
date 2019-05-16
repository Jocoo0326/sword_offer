cmake_minimum_required (VERSION 3.0)

project (detect_loop)

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()
