/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

int main()
{
    // cin은 데이터를 흘려넣어 보내는 스트림이고
    // 그 데이터를 해석하는 것은 자료형
    // 자료형에 따라서 알아서 처리해주기 때문에 scanf()보다 편리

    char user_input[100];

    // cin과 getline의 차이

    /*
        cout << "원하는 문장을 입력해주세요." << endl;
        cout << "입력: ";

        // cin >> user_input; >>: extraction operator

        cin.getline(user_input, sizeof(user_input));

        cout << "메아리: " << user_input << endl;
    */

    int number = -1;
    int number2 = 1;
    
    cout << "문자열을 입력하세요: " << endl;
    cin >> user_input; // cin은 만약 입력에 빈칸이 있다면 거기까지만 input으로 받아온다.
    // 만약 빈칸 상관없이 모든 입력은 받아오고 싶다면: cin.getline()
    // cin.getline(user_input, sizeof(user_input));
    cin.ignore(100, '\n'); // 최대 100글자까지만 받겠다. \n이 있으면 그때부터 무시하겠다.

    cout << "숫자를 순서대로 입력하세요:" << endl;
    cin >> number;
    cout << "숫자를 순서대로 입력하세요:" << endl;
    cin >> number2;

    cout << user_input << " " << number+number2 << endl;

    // 참고: cin.ignore(numeric_limits<streamsize>::max(),'\n')

    return 0;
}
