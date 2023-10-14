#include <iostream>

using namespace std;

int main()
{
    int N, M =0; //initialize N는 주어진 숫자의 개수 , M은 주어진 세수의 합이 근사해야 하는 숫자
    int Nums[100] ={0,};
    int appro_num =0; // 근사치
    
    cin >> N >> M; // get inputs
    
    for (int i=0; i<N; i++){ //get numbers
        cin>> Nums[i];
    }
    
    
    int sum =0;//세수의 합
    for (int j=0; j<N-2; j++){
        for(int k=j+1; k<N-1; k++){
            for(int l=k+1; l<N;l++){
                sum = Nums[j] + Nums[k] + Nums[l];
                if(sum <=M && sum > appro_num){
                  appro_num =sum;
                }
            }
        }
    }
    cout<< appro_num;
    return 0;
}