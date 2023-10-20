#include <iostream>
using namespace std;

char Pattern1[8][8] = {
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'}

};
char Pattern2[8][8] = {
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'}

};

int CalRepaint(char (&Matrix)[8][8]) {
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0;i < 8;i++) {
        for (int j = 0;j < 8;j++) {
            if (Matrix[i][j] != Pattern1[i][j]) {
                cnt1++;
            }
            if (Matrix[i][j] != Pattern2[i][j]) {
                cnt2++;
            }
        }
    }
    if (cnt1 > cnt2) {
        return cnt2;
    }
    else {
        return cnt1;
    }
}

int main() {
    int N, M = 0; //가로 ,세로
    cin >> N >> M;
   
    char Board[50][50]={0,}; //보드판
    char Square[8][8]; //8*8 판

    char Color; //색깔
    //데이터 입력 받음
    int answer = 64;

    for (int i = 0;i < N;i++) {
        for (int j = 0; j < M; j++) {
            cin >> Color;
            Board[i][j] = Color; //보드 배열에 색깔 값 저장
        }
    }

    for (int i = 0; i < N - 7; i++) { //세로 이동
        for (int j = 0; j < M - 7;j++) { //가로 이동
            //8*8 데이터 저장
            for (int k = 0;k < 8;k++) {
                for (int l = 0;l < 8;l++) {
                    Square[k][l] = Board[i+k][j+l];
                }
            }
            int min = CalRepaint(Square);
            if (answer > min) {
                answer = min;
            }
        }
    }
    cout << answer;



}