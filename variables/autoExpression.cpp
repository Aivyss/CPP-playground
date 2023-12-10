//
// Created by H. Lee on 2023/12/10.
//
#include <iostream>

using namespace std;

int autoExpression() {
    /**
     *  CPP에서도 타입추론을 이용할 수 있다.
     *  다른 언어에서는 타입추론을 통해서 의존성을 낮출 수 있지만 CPP에서도 그게 가능할지는 모르겠다.
     */
    float w = 1.0;
    auto x = 1.0; // float으로 추론하지 않고 double로 처리한다.
    double y = 1.1;
    auto z = 0;
    decltype(w) declareW;
    decltype(x) declareX;
    decltype(z) declareZ;

    cout << "w = " << w << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    /**
     * tips 타입 정보를 얻는 방법
     * (1) const std::type_info& typeInfo = typeid(variableName);
     * (2) decltype(v) variableName;
     */
    cout << "typeid(declareW).name() = " << typeid(declareW).name() << endl;
    cout << "typeid(w).name() = " << typeid(w).name() << endl;
    cout << "typeid(declareX).name() = " << typeid(declareX).name() << endl;
    cout << "typeid(x).name() = " << typeid(x).name() << endl;
    cout << "typeid(declareZ).name() = " << typeid(declareZ).name() << endl;
    cout << "typeid(z).name() = " << typeid(z).name() << endl;


    return 0;
}