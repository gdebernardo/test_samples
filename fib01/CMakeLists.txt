cmake_minimum_required(VERSION 3.14)
project(fib01)

set(CMAKE_CXX_STANDARD 11)
set( CMAKE_MAKE_PROGRAM "make" )
set( CMAKE_CXX_COMPILER "/usr/bin/g++" )
set( CMAKE_C_COMPILER "/usr/bin/gcc" )


set(SOURCE_FILE fib01.cpp)

add_executable(fib01 ${SOURCE_FILE})
