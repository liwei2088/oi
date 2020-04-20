#include <iostream>
using namespace std;

int main() {
    int a, b, c, n, t;
    cin >> n;
    int ra, rb, rc;
    bool f = false;
    for (int i = n / 14; i >= 0; i--) {
        int m = n - i * 14;
        for (int a = 0; a <= m / 7; a++)
            for (int b = 0; b <= m / 4; b++) {
                int mx = 0;
                t = m - 7 * a - 4 * b;
                if (t >= 0 && t % 3 == 0) {
                    f = true;
                    c = t / 3;
                    if (mx <= a + b + c) {
                        mx = a + b + c;
                        cout << a + i << " " << b + i << " " << c + i << endl;
                        return 0;
                    }
                }
            }
    }
    cout << "-1";
    return 0;
}