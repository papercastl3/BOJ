#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K; //N은 화폐단위의 수, K는 수의 합
	vector<int> coin_unit;
	cin >> N >> K;
	int unit = 0;
	for (int i = 0;i < N;i++) {
		cin >> unit;
		coin_unit.push_back(unit);
	}
	int cnt = 0;
	//reverse_iterator를 활용해서 에서 부터 검색
	for (vector<int>::reverse_iterator itr = coin_unit.rbegin();itr != coin_unit.rend();++itr) {
		int mok = K / *itr;
		cnt += mok;
		K = K-mok * (*itr);
	}
	cout << cnt;
	return 0;
}