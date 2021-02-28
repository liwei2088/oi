#include <cstdio>
#include <iostream>
using namespace std;
const int N = 505;
int n, m;
long long a[N], b[N], f[N][N], pre[N][N], res[N];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) scanf("%lld", &b[i]);
    for (int i = 1; i <= n; i++) {
        int p = 0;
        for (int j = 1; j <= m; j++) {
            f[i][j] = f[i - 1][j];
            if (a[i] == b[j])
                f[i][j] = f[i][p] + 1, pre[i][j] = p;
            else if (a[i] > b[j] && f[i - 1][j] > f[i - 1][p])
                p = j;
        }
    }
    int ans = 0, k = 0;
    for (int i = 1; i <= m; i++)
        if (ans < f[n][i]) ans = f[n][i], k = i;
    printf("%d\n", ans);
    int x = n, y = k, tt = 0;
    while (f[x][y]) {
        while (a[x] != b[y] && x) x--;
        res[++tt] = b[y];
        y = pre[x][y];
    }
    for (int i = tt; i >= 1; i--) printf("%lld ", res[i]);
    return 0;
}