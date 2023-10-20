#include <iostream>
#include <string>
using namespace std;

int main() {
	int num=0;
	int cnt=0;
	cin >> num;

	int i = 1;
	while (1) {
		string Num = to_string(i);
		if (Num.find("666") != string::npos) {
			cnt++;
			if (cnt == num) {
				cout << i;
				break;
			}
		}
		i++;
	}
	return 0;
}