#include <iostream>
using namespace std;

bool ss(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int L, n = 2, c = 0;
    cin >> L;
    while (1) {
        if (ss(n) == true) {
            if (L - n < 0) break;
            L -= n;
            c++;
            cout << n << endl;
        }
        n++;
    }
    cout << c << endl;
    return 0;
}