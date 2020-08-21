/**
 * HDU1114 Piggy-Bank
 * 算法：完全背包
 * 注意：这里求最小值，所以初始化时要最大化，且dp[0]=0 
 */

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int dp[10005], p[505], w[505];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int e, f, n, W;
        scanf("%d%d", &e, &f);
        W = f - e;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) scanf("%d%d", &p[i], &w[i]);
        memset(dp, 0x3f, sizeof(dp));
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
            for (int j = w[i]; j <= W; j++)
                dp[j] = min(dp[j], dp[j - w[i]] + p[i]);
        if (dp[W] == 0x3f3f3f3f)
            puts("This is impossible.");
        else
            printf("The minimum amount of money in the piggy-bank is %d.\n",
                   dp[W]);
    }
    return 0;
}