//
// Created by H. Lee on 2023/12/16.
//
#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;


    string toString() {
        /**
         * 다른 타입을 문자열로 변환하는 방법
         * (1) std::to_string (overload로 여러 메소드가 존재) (upper CPP11)
         * (2) std::stringstream 이용 ss.str();
         * (3) std::to_chars => char array를 필요로하고 메모리 공간이 충분해야 함 (안전성을 생각하면 별로일지도?)
         */
        return "{ \"name\": " + name + ", \"age\": " + to_string(age) + " }";
    }

    void setName(string name) {
        /**
         * 자바와는 this라는 지시자를 이용하는 방법이 다르다.
         * 파라미터와 중복되는 이름이 있다면 this->fieldName의 식으로 값을 취득할 수 있다.
         * golang과 다르게 포인터가 아니더라도 내부의 값을 바꾼다. => 구조체를 복사하지 않는다.
         *      (golang엔 this가 없지만 CPP는 있어서 동일 구조체인듯 싶다.)
         */

        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }
};

int testStruct() {
    /**
     * 구조체는 golang과 유사하다.
     * 메소드를 정의하는 방법에는 차이가 있다.
     * CPP에는 구조체/클래스 두가지가 있어서 조금 난해한데, 쓰는 방법은 가지가지이다.
     * 다만 아주 간단한 데이터 집합체의 경우는 struct, instance내에 메소드들로 특정 역할을 수행하도록 구성되었다면 class를 사용하는 듯.
     */
    auto person = Person{
            name: "test name",
            age: 12,
    };

    cout << "person.toString() = " << person.toString() << endl;

    person.setAge(15);
    person.setName("changed name");

    cout << "person.toString() = " << person.toString() << endl;

    return 0;
}