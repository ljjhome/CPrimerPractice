cmake_minimum_required(VERSION 3.0)
project(chp3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
INCLUDE_DIRECTORIES("./")
add_executable(ex_4_21 ./ex_4_21.cpp)
add_executable(ex_4_22 ./ex_4_22.cpp)
add_executable(ex_4_28 ./ex_4_28.cpp)
add_executable(ex_4_29 ./ex_4_29.cpp)
add_executable(ex_4_31 ./ex_4_31.cpp)
