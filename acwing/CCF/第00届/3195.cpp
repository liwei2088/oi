#include <cstdio>
#include <iostream>
using namespace std;

/**
 * 排列组合问题
 * 最高位不能排 0 有因为1必须在0的后面，所以最高位只能是 2 3 排
 * 枚举 0 1出现的次数 k ( 2<=k<=n-2) 因为至少要有 0 1 占2位 且最多也要确保 2 3也要占2位
 * 则 0 1 的排列方案数就是 C(n-1,k)*(k-1) 减1是因为最高位不能排
 * 2 3 的排列方案数就是 (n-k-1)  减1是因为必须有个排最高位
 * 在 0 1出现次数是k的情况下，方案数就应该是 C(n-1,k)*(k-1)*(n-k-1)
 * 将所有k的情况求和 就是最终答案
 */

const int N = 1005, MOD = 1e9 + 7;
int n, C[N][N];
int main() {
    cin >> n;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= i; j++)
            if (!j)
                C[i][j] = 1;
            else
                C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD;
    int ans = 0;
    for (int k = 2; k <= n - 2; k++) {
        ans =
            (ans + (long long)C[n - 1][k] * (k - 1) % MOD * (n - k - 1) % MOD) %
            MOD;
    }
    cout << ans;
    return 0;
}