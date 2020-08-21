/**
 * HDU2191 多重背包模板题目
 * 注意：多组数据要注意初始化
 */

#include <cstring>
#include <iostream>
using namespace std;
int f[105], p[105], h[105], c[105];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= m; i++) scanf("%d%d%d", &p[i], &h[i], &c[i]);
        memset(f, 0, sizeof(f));  //多组数据一定要注意初始化
        for (int i = 1; i <= m; i++)
            for (int j = n; j >= p[i]; j--)
                for (int k = 1; k <= c[i] && k * p[i] <= j; k++)
                    f[j] = max(f[j], f[j - p[i] * k] + h[i] * k);
        printf("%d\n", f[n]);
    }
    return 0;
}