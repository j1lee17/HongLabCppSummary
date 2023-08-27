/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream> // iostream이라는 헤더를 포함(include), drag 후 우클릭 해서 Go to Definition으로 헤더파일의 내용을 볼 수 있다.
// iostream의 모든 기능을 구현해놓은 것이 아니라 iostream에는 어떠한 기능들이 있다는 것을 설명해주는 파일, 간단하게 정의만 하는 문서: 헤더 파일.

// 헤더 파일 정의를 제외한 대부분에서는 문장 끝에 ; 을 적어줘야 한다.
using namespace std; // 네임스페이스 설명 std::cout, std를 생략 가능하게 하기 위함.

int main() // entry point
{
    // 주석(comment) 다는 방법

    cout << "Hello, World!" << endl;  // 자료형에 크게 상관없이 출력 가능. cout: character output, endl: end line, <<: stream insertion operator
    // printf("Hello World!!! by printf"); printf 함수를 사용한 코드. printf는 다양한 자료형을 출력할 때 복잡함.

    // 입출력에 대해서는 뒤에 다시 나와요.
    char user_input[100];
    cin >> user_input;
    cout << user_input;

    return 0;
}

/*
우리가 c++ 코드를 build 해서 exe 파일을 만들어 OS에게 실행시켜 달라하면
OS는 실행시키기 위해 시작점을 찾는데 이 때 가장 먼저 실행 시키는 함수가 main() 함수. "entry point!"
main함수에서 return 0의 의미는 OS에게 이 프로그램 잘 끝났다는 알려주는 의미.
*/

/* [실행파일 g++로 만들기]
terminal 창에
g++ <왼쪽에 main.cpp 파일을 드래그 앤 드롭> -o <원하는 실행파일 이름>.exe cf. linux의 경우 확장자 안적어줘도 됨.
*/

/*
https://www.geeksforgeeks.org/memory-layout-of-c-program/
size ./main 으로 실행파일의 구성을 확인할 수 있다.
*/