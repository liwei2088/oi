#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("data.in", "r", stdin);
    // freopen("data.out", "w", stdout);
    int n;
    cin >> n;
    int mi = -1e9, mx = 1e9;
    int a = 0, b = 0, c = 0;
    bool f = false;
    for (int i = 0; i <= n / 7; i++)
        for (int j = 0; j <= n / 4; j++) {
            int k = (n - 7 * i - 4 * j) / 3;
            if (k >= 0 && 3 * k == n - 7 * i - 4 * j) {
                f = true;
                int x = min(i, min(j, k));
                int y = i + j + k;
                if (mi < x || (mi == x && mx < y)) {
                    a = i, b = j, c = k;
                    mi = x;
                    mx = y;
                }
            }
        }
    if (f == false)
        cout << a << " " << b << " " << c << endl;
    else
        cout << "-1";
    return 0;
}