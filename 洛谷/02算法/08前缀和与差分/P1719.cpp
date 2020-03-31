#include <cstdio>
#include <iostream>
using namespace std;
int n, g[125][125];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
            g[i][j] += g[i - 1][j] + g[i][j - 1] - g[i - 1][j - 1];
        }
    int ans = -1e9;
    for (int x1 = 1; x1 <= n; x1++)
        for (int y1 = 1; y1 <= n; y1++)
            for (int x2 = 1; x2 <= n; x2++)
                for (int y2 = 1; y2 <= n; y2++) {
                    if (x1 > x2 || y1 > y2) continue;
                    ans = max(ans, g[x2][y2] - g[x1 - 1][y2] - g[x2][y1 - 1] +
                                       g[x1 - 1][y1 - 1]);
                }
    cout << ans;
    return 0;
}