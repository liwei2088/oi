#include <cstdio>
#include <iostream>
using namespace std;
int n, m, a[105][105], f[105][105];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                scanf("%d", &a[i][j]);
                f[i][j] = 0;
            }

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
        cout << f[n][m] << endl;
    }
    return 0;
}