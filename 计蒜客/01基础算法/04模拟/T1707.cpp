#include <iostream>
using namespace std;

int main() {
    int x, k, n;
    cin >> n;
    for (k = 1;; k++)
        for (x = 100; x >= 1; x--) {
            if (52 * (7 * x + 21 * k) > n) continue;
            if (52 * (7 * x + 21 * k) == n) {
                cout << x << endl << k;
                return 0;
            }
        }
    return 0;
}