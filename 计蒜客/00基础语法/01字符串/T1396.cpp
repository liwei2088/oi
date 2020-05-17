#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, n = 1, m;
        cin >> w;
        m = w;
        while (w) {
            n *= 10;
            w /= 10;
        }
        n /= 10;
        cout << m - m / n * n << endl;
    }

    return 0;
}