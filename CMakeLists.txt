cmake_minimum_required(VERSION 3.15)
project(primes)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -O2")

ADD_LIBRARY( ${PROJECT_NAME} STATIC primes.c )

add_executable( main main.c primes.h )

target_link_libraries(main ${PROJECT_NAME})
