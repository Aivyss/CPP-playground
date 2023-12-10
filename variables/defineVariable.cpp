//
// Created by H. Lee on 2023/12/10.
//
#include "iostream"

using namespace std;

int variables() {
    // define
    int a;
    cout << a << endl;

    // define & assign value
    int b = 5;
    cout << "b =" << b << ", a = " << a << endl;

    {
        int c = -1;
        {
            int d = -2;
        }

        // wrong range
//         cout << d << endl;
        cout << c << endl;
    }

    // wrong range
//    cout << c << endl;

    return 0;
}