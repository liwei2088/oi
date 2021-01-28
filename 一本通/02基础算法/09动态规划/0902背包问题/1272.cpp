#include <cstdio>
#include <iostream>
using namespace std;
const int T = 15, M = 205, N = 35;
int n, m, t, v[T][N], w[T][N], s[T], f[M];
int main() {
    cin >> m >> n >> t;
    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        s[c]++;
        v[c][s[c]] = a;
        w[c][s[c]] = b;
    }
    for (int i = 1; i <= t; i++)
        for (int j = m; j >= 0; j--)
            for (int k = 1; k <= s[i]; k++)
                if (j >= v[i][k]) 
                    f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
    cout << f[m];
    return 0;
}