//
// Created by H. Lee on 2023/12/16.
//

#include <iostream>
#include <sstream>

using namespace std;


union TestUnion {
    int intVal;
    long long llongVal;
    float floatVal;

    string toString() const {
        // ssteam을 include해야한다.
        stringstream ss;
        ss << "intVal = " << intVal << ", llongVal = " << llongVal << ", floatVal = " << floatVal;

        return ss.str();
    }
} u;

int testUnion() {
    /**
     * union은 필드간에 메모리를 공유한다.
     * 대체 이런 것을 왜 쓰는걸까?
     * 메모리를 절약하려고 쓰는 것이다. 일반적인 상황에서는 쓰이지 않음. 당장은 잊어버려도 괜찮을 듯 싶다.
     */
    TestUnion union1;
    union1.intVal = 1;
    cout << "union1.toString() = " << union1.toString() << endl;
    union1.llongVal = 2;
    cout << "union1.toString() = " << union1.toString() << endl;
    union1.floatVal = 3.3;
    cout << "union1.toString() = " << union1.toString() << endl;

    return 0;
}
