/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

int main()
{
    // 변수를 정의할 때 자료형을 미리 지정해야 합니다.
    // 자료형은 바꿀 수 없습니다.
    // 자료형을 미리 지정하는 이유는 자료형에 해당하는 메모리를 미리미리 할당하기 위해서.

    // 내부적으로 메모리를 이미 갖고 있습니다.
    int i;   // 변수 정의
    i = 123; // 변수에 값 지정 (객체 레퍼런스 아님), 변수의 이름은 "메모리 공간"을 의미한다고 보면 된다.
    // 사실 메모리 공간은 주소로 표현되는 데(pointer 개념) 비가시적이라 우리가 이름을 붙여주는 것.
    // python에서는 변수 이름은 객체 레퍼런스: https://wikidocs.net/189480
    // python이 느린 이유 중 하나인데 변수가 어떠한 값을 (변수가 저기에 있다!)라는 레퍼런스를 따라가서 지정하는 방식이기에 기본적으로 느리다.
    // c/cpp에서는 메모리 주소를 바로 참조할 수 있기 때문에 빠른 것.

    // sizeof 소개: 어떠한 자료형의 크기를 알려주는 연산자(operator)
    cout << i << " " << sizeof(i) << endl; // 추측해보세요.
    cout << sizeof(int) << endl;
    cout << 123 + 4 << sizeof(123+4) << endl;  // Q. 그렇다면 이때의 123+4는 어떠한 메모리 주소를 가지는 가?

    // 코테에서는 자주 언급이 안되나, 수치해석과 같이 정밀한 연산을 요하는 작업에서는 구분해줘야 한다.
    float f = 123.456f; // 마지막 f 주의
    double d = 123.456; // f 불필요

    cout << f << " " << sizeof(f) << endl; // 123.456 4
    cout << d << " " << sizeof(d) << endl; // 123.456 8

    // C++는 글자 하나와 문자열을 구분합니다.
    char c = 'a'; // literal, 따옴표 1개 사용.
    char str[] = "Hello, World!"; // c에서는 문자열을 문자의 배열로 사용한다. 따옴표 2개 사용. std::string 
    // 기본적으로 c/cpp에서는 문자열을 특정한 자료형으로 생각하지 않고 문자 여려 개가 쭉 나열되어 있는 문자의 배열로 사용됨.
    cout << c << " " << sizeof(c) << endl; // a 1

    // 그 외에도 다양한 자료형이 존재합니다.

    // 형변환
    i = 987.654; // double을 int에 강제로 저장

    cout << "int from double " << i << endl; // 추측해보세요. 987. c++ 표준에서는 버림을 한다.

    f = 567.89; // 이것도 형변환. 뒤에 f가 안붙어있으므로 double 자료형을 f 라는 float 자료형에 대입하는 것이기에 내부적으로는 형변환.

    // 기본 연산자

    // i = 987;
    i += 100; // i = i + 100;
    i++;      // i = i + 1; 프로그래밍을 하다보면 1증가 시키는 경우가 매우 많음.

    cout << i << endl; // 추측해보세요.

    // 불리언
    bool is_good = true;
    is_good = false;

    cout << is_good << endl; // 0

    cout << boolalpha << true << endl;   // true, boolalpha를 사용하면 1 대신 true 출력, 0 대신 false 출력.
    cout << is_good << endl;             // false
    cout << noboolalpha << true << endl; // 1, 숫자 출력을 원할 경우 noboolalpha를 사용.

    // 논리 연산 몇 가지 소개 (참고 문서 사용)
    // https://en.cppreference.com/w/cpp/language/operator_precedence

    cout << boolalpha;
    cout << (true && true) << endl;  // 추측해보세요. logical operator의 우선 순위가 insertion operator 보다 낮기 때문에 괄호로 먼저 처리하도록 해줌.
    cout << (true || false) << endl; // 추측해보세요.

    // 비교

    cout << (1 > 3) << endl;
    cout << (3 == 3) << endl;
    cout << (i >= 3) << endl;
    cout << ('a' != 'c') << endl;
    cout << ('a' != 'a') << endl;

    // 영역(scope)

    i = 123; // 더 넓은 영역
    
    // 영역이 다르기 때문에 동일한 변수 이름을 사용할 수 있다. 
    {
        int i = 345;       // <- 더 좁은 영역의 다른 변수
        cout << i << endl; // 추측해보세요. 345
        // 만약 i를 정의하지 않고 출력하게 된다면? 좁은 영역에서 찾았는데 없으니까 더 넓은 영역에서의 i 123을 출력하게 됨.
    }
    // 중요: 어떤 한 영역 안에 이름이 동일한 변수 여러 개를 만들 수 없다!!!

    cout << i << endl; // 추측해보세요.  123

    return 0;
}
