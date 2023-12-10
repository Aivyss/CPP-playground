cmake_minimum_required(VERSION 3.22)
project(CPP_playground)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP_playground helloWorld/helloWorld.cpp variables/defineVariable.cpp man.cpp helloWorld/helloWorld.h variables/variables.h variables/integers.cpp variables/reals.cpp)
