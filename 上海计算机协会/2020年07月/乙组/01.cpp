/**
 *  https://iai.sh.cn/problem/96
 *  简单的DP题：
 *  1.状态：dp[i][j]，表示跑到第 i 段，最后状态为 j 时的最大得分，其中走路时 j=1，跑步时 j=2，冲刺时 j=3。
 *  2.转移方程：
 *      dp[i][1] = max(dp[i-1][1],dp[i-1][2],dp[i-1][3])
 *      dp[i][2] = max(dp[i-1][1],a[i-1][2])+a[i]
 *      dp[i][3]=max(dp[i−1][1],a[i−1][2])+2×a[i]
 *  3.初始值：全部为 0。
 */

#include <iostream>
using namespace std;
int n, f[100005][5];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        f[i][1] = max(f[i - 1][1], max(f[i - 1][2], f[i - 1][3]));
        f[i][2] = max(f[i - 1][1], f[i - 1][2]) + x;
        f[i][3] = max(f[i - 1][1], f[i - 1][2]) + 2 * x;
    }
    cout << max(f[n][1], max(f[n][2], f[n][3]));
    return 0;
}