#include <iostream>
using namespace std;
int n, k, g[105][105], tot;
int f[105][10005];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int mx = 0;
        cin >> g[i][0];
        for (int j = 1; j <= g[i][0]; j++) {
            cin >> g[i][j];
            mx = max(mx, g[i][j]);
        }
        tot += mx;
    }
    // f[i][j] 表示前 i 个盒子中宝物价值和为 j 的方案数
    f[0][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= g[i][0]; j++)
            for (int t = g[i][j]; t <= tot; t++)
                if (f[i - 1][t - g[i][j]]) f[i][t] += f[i - 1][t - g[i][j]];
    int ans = 0;
    for (int i = 1; i <= tot && k > 0; i++) {
        int w = min(k, f[n][i]);
        k -= w;
        ans += w * i;
    }
    cout << ans;
    return 0;
}