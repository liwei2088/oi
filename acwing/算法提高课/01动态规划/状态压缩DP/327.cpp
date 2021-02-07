#include <algorithm>
#include <iostream>
using namespace std;
/**
 * 状态压缩 DP
 */
const int MOD = 1e9;
int n, m, g[14], f[14][1 << 14];
int p[1 << 14], pn;
int main() {
    cin >> m >> n;  //输入行数和列数

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            g[i] = (g[i] << 1) + x;  //将一行二进制转换为一个十进制数字
        }

    //枚举每一行合法状态 注意同行 相邻两个二进制位不能是1
    for (int i = 0; i < (1 << n); i++)
        if (!(i & i >> 1)) p[++pn] = i;

    f[0][0] = 1;
    for (int i = 1; i <= m + 1; i++)
        for (int a = 1; a <= pn; a++)
            for (int b = 1; b <= pn; b++)
                if (!(p[a] & p[b]) && (p[a] & g[i]) == p[a])
                    f[i][p[a]] = (f[i][p[a]] + f[i - 1][p[b]]) % MOD;

    cout << f[m + 1][0];
    return 0;
}