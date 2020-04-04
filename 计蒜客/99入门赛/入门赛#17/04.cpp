#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int n, a[100005][4], f[100005][4];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= n; j++) scanf("%d", &a[j][i]);
    memset(f, 0x3f, sizeof(f));
    f[1][1] = a[1][1], f[1][2] = a[1][2], f[1][3] = a[1][3];
    for (int i = 2; i <= n; i++) {
        f[i][1] = min(f[i - 1][2], f[i - 1][3]) + a[i][1];
        f[i][2] = min(f[i - 1][1], f[i - 1][3]) + a[i][2];
        f[i][3] = min(f[i - 1][1], f[i - 1][2]) + a[i][3];
    }
    int ans = f[0][0];
    for (int i = 1; i <= 3; i++) ans = min(ans, f[n][i]);
    cout << ans;
    return 0;
}