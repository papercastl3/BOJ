#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f = 0; // 변수 
    cin >> a >> b >> c >> d >> e >> f;

    for (int x = -999;x <= 999;x++) {
        for (int y = -999;y <= 999;y++) {
            int result = a * x + b * y;
            int result2 = d * x + e * y;
            if (result == c && result2==f) {
                cout << x <<" "<< y;
            }
        }
    }
    return 0;
}