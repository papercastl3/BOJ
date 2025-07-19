#include <bits/stdc++.h>
using namespace std;
//2309번: 일곱 난쟁이
//문제: 일곱 난쟁이의 키를 입력받아, 9명의 난쟁이 중 2명을 제외하고 나머지 7명의 키의 합이 100이 되는 조합을 찾는 문제
//
int main(){
    int sum=0;
    int mem[9]; 
    int dwarfs[7];
    fill(mem,mem+9,0); //멤버 배열 초기화
    fill(dwarfs,dwarfs+7,0); //dwarfs 배열 초기화
    for (int i = 0; i < 9; i++) {
        cin >> mem[i]; // 키 입력 받음
    }
    sort(mem, mem + 9); // 키를 오름차순으로 정렬
    do{
        sum = accumulate(mem, mem + 7, 0); // 7명의 난쟁이 키의 합을 계산
        if( sum == 100){ // 합이 100이면
            copy(mem, mem + 7, dwarfs); // 난쟁이 키를 dwarfs 배열에 복사
            break; // 반복문 종료
        }
    }while(next_permutation(mem, mem + 9));
    for(int i = 0; i < 7; i++) {
        cout << dwarfs[i] << endl; // 난쟁이 키 출력
    }
    return 0; // 프로그램 종료
}
   