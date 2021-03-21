#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 2010;
int n, a[N], b[N];
int f[N][N];

int dp() {
    for (int i = 1; i <= n; i++) b[i] = a[i];
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++) {
        int minv = 1e9;
        for (int j = 1; j <= n; j++) {
            minv = min(minv, f[i - 1][j]);
            f[i][j] = minv + abs(a[i] - b[j]);
        }
    }
    int res = 1e9;
    for (int i = 1; i <= n; i++) res = min(res, f[n][i]);
    return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int ans = dp();
    reverse(a + 1, a + n + 1);
    ans = min(ans, dp());
    printf("%d\n", ans);
    return 0;
}