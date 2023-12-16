//
// Created by H. Lee on 2023/12/16.
//

#include <iostream>

using namespace std;

void testPointer() {
    auto num = 3;

    // 메모리 주소는 기본적으로 16진수로 표현한다.
    cout << "&num = " << &num << endl;

    int tmp = 5;
    int *a;
    int *b, c;
    int *d = nullptr; // 예기치 않은 동작을 방지하기 위해서 포인터 타입을 선언하고 초기화 할 값이 없다면 nullptr로 해두는 것이 좋다.

    a = &tmp;
    cout << "&tmp = " << &tmp << endl;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    cout << "b = " << b << endl;
    // 복수개를 동시에 선언할 시, *연산자가 붙지 않은 것은 값타입이 된다.
    cout << "c = " << c << endl;

    //    cout << "*b = " << *b << endl; // => 불가능. 값이 초기화 되어 있지 않다. (에러를 내지도 않지만 프로그램이 예기치 않게 종료됨)
    cout << "d = " << d << endl;
    cout << "(d == nullptr) = " << (d == nullptr) << endl;

    // 불가능. 값이 초기화 되어 있지 않다. (에러를 내지도 않지만 프로그램이 예기치 않게 종료됨)
    cout << "*d = " << *d << endl;
    cout << "====end====" << endl;
}