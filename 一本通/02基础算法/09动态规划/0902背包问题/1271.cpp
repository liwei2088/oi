#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1005, M = 35, T = 105;
int n, m, t, a[N], b[N], c[N], f[M][T];
int main() {
    cin >> m >> t;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i];
    memset(f, 0x3f, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= 0; j--)
            for (int k = t; k >= 0; k--) {
                int x = max(j - a[i], 0);
                int y = max(k - b[i], 0);
                f[j][k] = min(f[j][k], f[x][y] + c[i]);
            }
    cout << f[m][t];
    return 0;
}