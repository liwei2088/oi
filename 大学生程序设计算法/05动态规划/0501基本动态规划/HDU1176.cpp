/**
 * HDU1176
 * 算法：线性动态规划
 * 思路：类似数塔问题，待求解的问题是f[0][5] 反向求解
 *       f[i][j] = max(f[i+1][j],f[i+1][j-1],f[i+1][j+1])
 */

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
// f[i][j] 表示i时刻在j位置能够得到的最大馅饼数量
int f[100005][20];
int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        int mxt = 0;
        memset(f, 0, sizeof(f));  //注意多组数据要清空f数组
        for (int i = 1; i <= n; i++) {
            int t, x;
            scanf("%d%d", &x, &t);
            f[t][x]++;
            mxt = max(mxt, t);
        }
        for (int i = mxt; i >= 0; i--)
            for (int j = 0; j <= 10; j++) {
                int k = f[i + 1][j];
                if (j > 0) k = max(k, f[i + 1][j - 1]);
                if (j < 10) k = max(k, f[i + 1][j + 1]);
                f[i][j] += k;
            }
        printf("%d\n", f[0][5]);
    }
    return 0;
}