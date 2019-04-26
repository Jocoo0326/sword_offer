set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -g")

add_executable (main
               main.c
               lib.c)
