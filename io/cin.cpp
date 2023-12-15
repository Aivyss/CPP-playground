//
// Created by H. Lee on 2023/12/15.
//
#include <iostream>
#include <cstring>

using namespace std;

int cinStream() {
    const int Size = 15;
    char inputValue[Size];
    cout << "input string value: ";
    /**
     * cin은 space, tab, return을 기준으로 끊긴다.
     * space, tab을 문자열로 처리하고 싶을 경우 std::cin.getLine(value, size)를 이용한다.
     * 단순한 cin은 메모리 오버플로우를 관리하지 않는다.
     */
    cin >> inputValue;
    cout << endl;

    cout << "input value is (" << inputValue << ")" << endl;
    cout << "input size is (" << sizeof(inputValue) << ")" << endl;
    cout << "input strlen is (" << strlen(inputValue) << ")" << endl; // warning: overflow

    return 0;
}

int cinStream2() {
    // 받아들이는 문자열의 크기를 상정할 수 없을 경우에는 std::string을 사용해 동적메모리 할당을 해주는 것이 좋다.
    const int Size = 15;
    char inputValue[Size];
    cout << "input string value: ";
    cin.getline(inputValue, Size);
    cout << endl;

    cout << "input value is (" << inputValue << ")" << endl;
    cout << "input size is (" << sizeof(inputValue) << ")" << endl; // always 15
    cout << "input strlen is (" << strlen(inputValue) << ")" << endl; // max: 14 because of '\0'

    return 0;
}

int testString() {
    /**
     * 배열 크기의 제약으로부터 자유롭다(동적 메모리 할당)
     * 대입 등을 c-style로 가능하다.
     */
    string a = "test str";
    string b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    /**
     * char array와 달리 통째로 대입하는 것이 가능해진다.
     */
    b = a;
    cout << "b = " << b << endl;

    /**
     * array와 동일하게 index를 이용한 데이터 조작이 가능하다.
     * python처럼 되지는 않는다. ASCII가 아닌한 index하나가 1개의 문자로 취급되지는 않는다. (유니코드..)
     */
    for (int i = 0; i < a.size(); ++i) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }


    return 0;
}