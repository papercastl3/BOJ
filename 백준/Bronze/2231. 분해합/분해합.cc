#include <iostream>
#include<string>
#include <cmath>

using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    int Each_num[7] = { 0, }; //각 자리 숫자 저장할 배열
    int answer = 0; //initialize
    for (int num = 0;num <= N;num++) {
        int sum = 0;
        string Num = to_string(num); //숫자를 문자열로 변환후 자리 수 몇개인지 확인
        int num_length = Num.length();

        for (int i = 0;i < num_length;i++) {
            Each_num[i] = stoi(Num.substr(i, 1));
            //각자리의 숫자 배열에 저장
            //int zisu = pow(10,(num_length-i-1));
            sum = sum + Each_num[i] * pow(10, num_length - i - 1) + Each_num[i];

        }
        if (sum == N) {
            if (sum < answer || answer == 0) {
                answer = num;
            }

        }
    }
    
    if (answer == 0) {
        cout << 0;
    }
    else {
        cout << answer;
    }

    return 0;
}