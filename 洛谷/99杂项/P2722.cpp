#include <cstdio>
#include <iostream>
using namespace std;
int m, n, v[10005], w[10005], f[10005];
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    for (int i = 1; i <= n; i++)
        for (int j = v[i]; j <= m; j++) f[j] = max(f[j], f[j - v[i]] + w[i]);
    cout << f[m];
    return 0;
}