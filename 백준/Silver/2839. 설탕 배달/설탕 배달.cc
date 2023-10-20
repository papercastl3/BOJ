#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	int cycle1 = N / 3;
	int cycle2 = N / 5;
	int min = 5000;

	//3x + 5y = N
	for (int x = 0;x <= cycle1;x++) {
		for (int y = 0;y <= cycle2;y++) {
			if (3 * x + 5 * y == N) {
				if (x + y < min) {
					min = x + y;
				}
			}
		}
	}
	if (min == 5000) {
		cout << -1;
	}
	else {
		cout << min;
	}
	return 0;
}

