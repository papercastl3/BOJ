#include <bits/stdc++.h>
using namespace std;
//10808번: 알파벳 개수
//문제: 알파벳 소문자가 주어졌을 때, 각 알파벳이 몇 번 등장했는지 세는 문제
int main(){
    int alpahabet[26];
    fill(alpahabet,alpahabet+26,0);//0으로 초기화
    string word;
    cin>>word;
    for(int i=0;i<word.length();i++){
        int idx = int(word[i])-97;
        alpahabet[idx]++;
    }
    for(int i:alpahabet){
        cout<<i<<" ";
    }
}