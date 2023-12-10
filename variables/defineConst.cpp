//
// Created by H. Lee on 2023/12/10.
//
#include <iostream>
/*
 * 상수의 정의는 두가지 방식이 가능하다.
 * (1) #define XXX value
 * (2) const {type} XXX = value;
 */
#define PIE 3.1415926535

using namespace std;

// 놀랍게도 CPP는 function hoisting이 되지 않는다.
float calcCircularArea(float r) {
    return r * r * PIE;
}

int defineConstant() {
    float r = 3;
    float result = calcCircularArea(r);
    
    cout << "result = " << result << endl;

    return 0;
}

