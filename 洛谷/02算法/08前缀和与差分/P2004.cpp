#include <cstdio>
#include <iostream>
using namespace std;
int n, m, c, g[1005][1005];
int main() {
    cin >> n >> m >> c;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
            g[i][j] += g[i - 1][j] + g[i][j - 1] - g[i - 1][j - 1];
        }
    int mx = -1e9, x = 0, y = 0;
    for (int x1 = 1; x1 <= n - c + 1; x1++)
        for (int y1 = 1; y1 <= m - c + 1; y1++) {
            int x2 = x1 + c - 1, y2 = y1 + c - 1;
            int t = g[x2][y2] - g[x1 - 1][y2] - g[x2][y1 - 1] + g[x1 - 1][y1 - 1];
            if (mx < t) {
                mx = t;
                x = x1;
                y = y1;
            }
        }
    cout << x << " " << y;
    return 0;
}