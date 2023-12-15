//
// Created by H. Lee on 2023/12/16.
//
#include <type_traits>

using namespace std;
template <typename T>

int size(T arr[]) {
    return extent<decltype(arr)>::value;
}