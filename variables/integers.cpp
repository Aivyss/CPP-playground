//
// Created by H. Lee on 2023/12/10.
//
#include <iostream>
#include <climits>

/**
 * INT_MAX 같은 상수들은 원래 climits에 있던 것들로 보이나, 전처리를 안해도 문제가 없다...?
 * 컴파일러에 따라서 필요 없는 경우가 있는데 이식성이 떨어질 수 있으니 포함하는게 나은가 봄.
 * long과 llong차이가 없는데 이건 왜이래?
 * long 4bytes, 2147483647 (64비트 머신인지 32 비트 머신인지에 따라 달라지는듯?)
 * 메모리 걱정이 없다면, 대체로 llong을 쓰는게 무난하다.
 */
using namespace std;

int integers() {
    int maxInt = INT_MAX;
    short maxShort = SHRT_MAX;
    long maxLong = LONG_LONG_MAX;
    long long maxLlong = LLONG_MAX;

    cout << "maxShort = " << maxShort << ", sizeof = " << sizeof maxShort << " (bytes)" << endl;
    cout << "maxInt = " << maxInt << ", sizeof = " << sizeof maxInt << " (bytes)" << endl;
    cout << "maxLong = " << maxLong << ", sizeof = " << sizeof maxLong << " (bytes)" << endl;
    cout << "maxLlong = " << maxLlong << ", sizeof = " << sizeof maxLlong << " (bytes)" << endl;

    // non negative integers
    unsigned int maxUint = UINT_MAX;
    unsigned short maxUShort = USHRT_MAX;
    unsigned long maxULong = ULONG_MAX;
    unsigned long long int maxULlong = ULLONG_MAX;

    cout << "maxUShort = " << maxUShort << ", sizeof = " << sizeof maxUShort << " (bytes)" << endl;
    cout << "maxUint = " << maxUint << ", sizeof = " << sizeof maxUint << " (bytes)" << endl;
    cout << "maxULong = " << maxULong << ", sizeof = " << sizeof maxULong << " (bytes)" << endl;
    cout << "maxULlong = " << maxULlong << ", sizeof = " << sizeof maxULlong << " (bytes)" << endl;

    return 0;
}