#include <iostream>
using namespace std;

/**
 * 状态压缩 DP
 */

int n, k;
int q[1 << 12], num[1 << 12], pn;
long long f[12][144][1 << 12];
int main() {
    cin >> n >> k;
    for (int i = 0; i < (1 << n); i++)
        if (!(i & i << 1)) {
            q[++pn] = i;
            for (int j = 0; j < n; j++) num[pn] += (i >> j & 1);
        }
    f[0][0][0] = 1;
    for (int i = 1; i <= n + 1; i++)
        for (int j = 0; j <= k; j++)
            for (int a = 1; a <= pn; a++)
                for (int b = 1; b <= pn; b++)
                    if ((j >= num[a]) && !(q[a] & q[b]) &&
                        !(q[a] & (q[b] >> 1)) && !(q[a] & (q[b] << 1)))
                        f[i][j][q[a]] += f[i - 1][j - num[a]][q[b]];
    cout << f[n + 1][k][0];
    return 0;
}