//
// Created by H. Lee on 2023/12/10.
//

#include <iostream>

using namespace std;

int array() {
    /**
     * 정의된 배열의 사이즈보다 적게 element를 넣을 수 있다. => 나머지는 전부 zero value가 된다.
     * 초기화를 선언 이후에 할 수 없다.
     * 배열에 다른 배열을 대입할 수 없다.
     * 각 element를 수정할 수는 있다.
     */
    short month[12] = {1, 2, 3, 4, 5};
    cout << "month = " << month << endl;
    cout << "month[0] = " << month[0] << endl;
    cout << "month[4] = " << month[4] << endl;
    cout << "month[5] = " << month[5] << endl;

    month[5] = 6;
    cout << "month[5] = " << month[5] << endl;
    cout << "month[12] = " << month[12] << endl; // CPP에서는 인덱스 초과시에 에러를 띄우지 않는다. 의미 없는 값을 반환한다.

    /**
     * 초기값을 모두 zero value로 해서 초기화할 수 있다.
     */
    int testNums[20] = {};
    cout << "testNums[0] = " << testNums[0] << endl;

    /**
     * 문자열을 정의하려고 한다면 널문자열을 하나 넣어야 하므로 size를 1개 늘려서 한다 (더 늘려도 상관은 없는듯 한데 메모리를 낭비하므로 무의미).
     */
    char testStr[7] = {'H', 'e', 'l', 'l', 'o', '\0', 'a'};
    cout << testStr << endl; // Hello

    /**
     * double quotation으로 위와 같은 귀찮은 일들을 덜 수 있다. (ASCII가 아니면 더 복잡하기도 하고...)
     */
    char testStr2[] = "Hello world!";
    cout << testStr2 << endl;

    return 0;
}
