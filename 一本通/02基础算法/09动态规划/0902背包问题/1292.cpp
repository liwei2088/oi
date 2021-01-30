#include <cstdio>
#include <iostream>
using namespace std;
int n, m, K, v[105], w[105], f[1005][505], g[1005][505];
int main() {
    cin >> n >> m >> K;
    for (int i = 1; i <= K; i++) cin >> v[i] >> w[i];
    for (int i = 1; i <= K; i++)
        for (int j = n; j >= v[i]; j--)
            for (int k = m; k >= w[i]; k--)
                if (f[j][k] < f[j - v[i]][k - w[i]] + 1) {
                    f[j][k] = f[j - v[i]][k - w[i]] + 1;
                    g[j][k] = g[j - v[i]][k - w[i]] + w[i];
                } else if (f[j][k] == f[j - v[i]][k - w[i]] + 1 &&
                           g[j][k] > g[j - v[i]][k - w[i]] + w[i]) {
                    g[j][k] = g[j - v[i]][k - w[i]] + w[i];
                }
    cout << f[n][m] << " " << m - g[n][m] << endl;
    return 0;
}