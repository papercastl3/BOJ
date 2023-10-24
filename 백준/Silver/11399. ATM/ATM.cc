#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	//vector<pair<int, int>> bank_queue;
	cin >> N;
	vector<int> times;
	for (int i = 0;i < N;i++) {
		int t;
		cin >> t;
		times.push_back(t);
	}
	sort(times.begin(), times.end());
	int min = 0;
	for (int i = 1;i <= N;i++) {
		min=min+times.at(N-i)* i;
		
	}

	cout << min;
}