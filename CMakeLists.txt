cmake_minimum_required(VERSION 3.15)
project(primes)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Os")


# ADD_LIBRARY( ${PROJECT_NAME} MODULE primes.c )

add_executable( main main.c primes.h primes.c )
# set_target_properties(main PROPERTIES COMPILE_FLAGS "-S") 

# target_link_libraries(main ${PROJECT_NAME})
