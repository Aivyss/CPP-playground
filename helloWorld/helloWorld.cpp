#include <iostream> // 전처리지시자

/*
    CPP에서 함수를 사용하고자 한다면
    반드시 그 함수의 원형을 미리 정의하여야 한다.
 */

using namespace std; // 없다면 std::cout std::endl처럼 사용하려는 함수가 어떤 namespace에 있는지 적어야 하는듯?

int helloWorld() {
    /**
     * cout stdout
     * endl \n
     */
    cout << "Hello, World!" << endl;
    return 0;
}
