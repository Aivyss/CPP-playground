//
// Created by H. Lee on 2023/12/16.
//
#include <iostream>
#include <iterator>

using namespace std;

/**
 * CPP의 enum은 이름 자체를 구할 방법은 없다.
 * switch를 쓰거나 map을 자체적으로 만들어야 한다.
 * 실제 값은 정수형이나 enum 값에 곧바로 산술연산자를 사용할 수는 없다.
 * 정수형 타입에 대입하면 암묵적 형변환이 일어나기는 한다.
 * 구버전으로 enum class 사용이 권장된다.
 */
enum Spectrum {
    Red,
    Orange,
    Yellow,
    Green,
    Blue,
    Violet,
} s;

/**
 * 동일 스코프 내부더라도 EnumName::EnumElementName의 형식으로만 참조 가능하다.
 * 암묵적 형변환을 허용하지 않는다.
 * 되도록 enum 대신 enum class 사용이 권장된다.
 * static_cast를 이용해 int로 형변환이 가능하다. enum과 마찬가지로 이름을 얻어낼 순 없는듯. switch를 쓰든가 map을 쓰든가...
 */
enum class Gender {
    Male,
    Female
} gender;

int testEnum() {
    Spectrum ss[6] = {Red, Orange, Yellow, Green, Blue, Violet};
    // CPP17 iterator에선 std::size로 배열의 크기를 구할 수 있다.
    // 그게 아니면 좀 귀찮게 구해야 하는 듯? CPP11에서는 type_traits의 std::extent를 이용...

    for (int i = 0; i < extent<decltype(ss)>::value; ++i) {
        cout << "ss[" << i << "] = " << ss[i] << endl;
        cout << "ss[" << i << "] = " << ss[i] << endl;
    }

    cout << "Orange - 1 = " << Orange - 1 << endl;

    return 0;
}

int testEnumClass() {
    gender = Gender::Male;

    cout << static_cast<int>(gender) << endl;
    cout << static_cast<int>(Gender::Female) << endl;

    return 0;
}