//
// Created by H. Lee on 2023/12/10.
//
#include <iostream>

using namespace std;

int charType() {
    int a = 77;
    char b = a;
    cout << "b = " << b << endl;

    char c = 'a';
    cout << "c = " << c << endl;

    /**
     * null 문자 '\0'으로 문자열 종료를 나타낼 수 있다.
     * 이것이 없으면, 어느 시점에서 끝나는지 모르므로 출력이 계속 된다.
     */
    char arr[] = {'a', 'b', 'c'};
    cout << arr << endl;
    char arr2[]  = {'a', 'b', 'c', '\0'};
    cout << arr2 << endl;

    /**
     * 문자열을 의미하는 double quotation에는 빈 문자열이라 하더라도 '\0'가 반드시 포함되어 있다.
     * 따라서 "a" => {'a', '\0'}로 두개의 char를 넣으려 하므로 char는 single quotation만 가능하다.
     */

    return 0;
}