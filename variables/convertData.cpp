//
// Created by H. Lee on 2023/12/10.
//

#include <iostream>

using namespace std;

int convertType() {
    char ch = 'M';

    /**
     * CPP는 암묵적인 형변환도 가능하지만 아래와 같이 명시적 형변환도 시행할 수 있다
     * 아래와 같은 형변환은 형변환 에러를 체크하지 않으므로 위험하다.
     */
    cout << "(int) ch = " << (int) ch << endl;
    cout << "int(ch) = " << int(ch) << endl;

    /**
     * static_cast는 형변환 오류를 컴파일 레벨에서 확인이 가능하다.
     */
    cout << "static_cast<int>(ch) = " << static_cast<int>(ch) << endl;


    return 0;
}
