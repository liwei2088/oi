#include <iostream>
using namespace std;
int g[205][205], n, a[205], f[205], p[205];

void print(int x) {
    if (p[x] != 0) print(p[x]);
    if (p[x] == 0)
        cout << x;
    else
        cout << "-" << x;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int x, y;
    while (cin >> x >> y && x != 0 && y != 0) g[x][y] = 1;
    int ans = 0, idx = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = a[i];
        for (int j = 1; j < i; j++) {
            if (g[j][i] == 1 && f[i] < f[j] + a[i]) {
                f[i] = f[j] + a[i];
                p[i] = j;
            }
        }
        if (ans < f[i]) {
            ans = f[i];
            idx = i;
        }
    }
    print(idx);
    cout << endl;
    cout << ans;
    return 0;
}