cmake_minimum_required(VERSION 3.22)
project(CPP_playground)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP_playground helloWorld/helloWorld.cpp variables/defineVariable.cpp man.cpp helloWorld/helloWorld.h variables/variables.h variables/integers.cpp variables/reals.cpp variables/charType.cpp variables/boolType.cpp variables/defineConst.cpp variables/convertData.cpp variables/autoExpression.cpp array/array.cpp array/array.h io/cin.cpp io/io.h struct/struct.cpp struct/struct.h struct/union.cpp struct/enum.cpp snippet/array.cpp snippet/array.h)
