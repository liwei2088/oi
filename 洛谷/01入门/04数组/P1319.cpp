#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int k = 0, t = -1;
    while (cin >> x) {
        for (int i = 1; i <= x; i++) {
            cout << k;
            t = (t + 1) % n;
            if (t == n - 1) cout << endl;
        }
        k = !k;
    }
    return 0;
}