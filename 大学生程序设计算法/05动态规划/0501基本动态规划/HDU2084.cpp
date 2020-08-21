/**
 * HDU2084 数塔问题
 */
#include <cstdio>
#include <iostream>
using namespace std;
int a[105][105], f[105][105];
int main() {
    int c;
    scanf("%d", &c);
    while (c--) {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= i; j++) scanf("%d", &a[i][j]);
        for (int i = n; i >= 1; i--)
            for (int j = 1; j <= i; j++)
                f[i][j] = max(f[i + 1][j], f[i + 1][j + 1]) + a[i][j];
        printf("%d\n", f[1][1]);
    }
    return 0;
}