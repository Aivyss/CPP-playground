//
// Created by H. Lee on 2023/12/16.
//
#include <iostream>
#include <utility>

using namespace std;

/*
 * 구조체의 접근제어자는 기본적으로 public이다.
 * class의 접근제어자는 기본적으로 private이다.
 * private:
 *      type fieldName; 형식으로 필드도 private로 구성할 수 있다.
 * golang과 다르게 문법적으로 constructor가 존재한다.
 */
struct Person {
    string name;
    int age;

    string toString() const {
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

        /**
         * (1) this->name = name;
         * (2) this->name = std::move(name);
         *
         * move를 사용하는 것이 성능상 이점이 있다.
         * (1)은 값의 복사가 이루어지고 파라미터의 값이 여전히 유효하다.
         * (2)는 실제 데이터의 이동이 일어나고 소유권을 이전한다. 성능상의 이점이 있다.
         */
        this->name = move(name);
    }

    void setAge(int age) {
        /**
         * primitive type은 move를 사용하지 않아도 된다.
         * 원시타입은 복사가 빠르기 때문에 이동보다 단순 복사가 유리하다.
         */
        this->age = age;
    }
} p; // 구조체의 끝맺음 앞에 이름을 정의할 경우, 구조체의 생성을 명시적으로 할 필요 없이 그 이름을 인스턴스 명으로 사용할 수 있다.


int testStruct() {
// old style
//    auto person = Person{
//            name: "test name",
//            age: 12,
//    };
    /**
     * 구조체는 golang과 유사하다.
     * 메소드를 정의하는 방법에는 차이가 있다.
     * CPP에는 구조체/클래스 두가지가 있어서 조금 난해한데, 쓰는 방법은 가지가지이다.
     * 다만 아주 간단한 데이터 집합체의 경우는 struct, instance내에 메소드들로 특정 역할을 수행하도록 구성되었다면 class를 사용하는 듯.
     */
    auto person = Person{
            .name =  "test name",
            .age =  12,
    };

    cout << "person.toString() = " << person.toString() << endl;

    person.setAge(15);
    person.setName("changed name");

    cout << "person.toString() = " << person.toString() << endl;
    cout << "p.toString() = " << p.toString() << endl;

    return 0;
}