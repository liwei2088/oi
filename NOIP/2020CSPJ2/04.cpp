#include <iostream>
using namespace std;
int n, m, a[1005][1005];
long long f[1005][1005], g[1005][1005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];

    for (int i = 0; i <= n + 1; i++)
        for (int j = 0; j <= m + 1; j++) f[i][j] = g[i][j] = -1e18;
    f[0][1] = f[1][0] = 0;
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
        }
        for (int i = n; i >= 1; i--) {
            g[i][j] = max(g[i + 1][j], g[i][j - 1]) + a[i][j];
        }
        for (int i = 1; i <= n; i++) {
            g[i][j] = f[i][j] = max(f[i][j], g[i][j]);
        }
    }
    cout << f[n][m];
    return 0;
}