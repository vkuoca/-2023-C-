# 2023
[2023 C++] 2주차(실습1)
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // 시드 설정
    int rand_num = rand() % 101; //// 0~100 사이의 랜덤한 수 생성
    cout << "랜덤한 수: " << rand_num << endl;
    int repeat;
    cout << "특정 배수 개수: ";
    cin >> repeat;


    int num;


    for (int i = 1; i <= repeat; i++) {
        cout << i << "번째 특정 배수 :  ";
        cin >> num; //특정 배수 입력

        // 특정 배수만 출력하는 부분
        cout << "< 특정 배수만 출력하는 프로그램 >" << endl;
        for (int k = 1; k <= rand_num; k++)
        {
            if (k % num == 0) { //: K가 num으로 나누어 떨어지면
                cout << k << ", "; // k 출력

            }

        }
        cout << endl;

        // 특정 배수 제외 출력하는 부분
        cout << "< 특정 배수 제외 출력하는 프로그램 >" << endl;
        for (int k = 1; k <= rand_num; k++)
        {
            if (k % num != 0) { // k가 num으로 나누어 떨어지지 않으면
                cout << k << ", "; // k 출력

            }

        }

        cout << endl;

    }
    return 0;
}
