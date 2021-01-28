#include <cstdio>
#include <iostream>
using namespace std;
const int N = 35, M = 205;
int n, m, w[N], c[N], f[M];
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) cin >> w[i] >> c[i];
    for (int i = 1; i <= n; i++)
        for (int j = w[i]; j <= m; j++) f[j] = max(f[j], f[j - w[i]] + c[i]);
    cout << "max=" << f[m];
    return 0;
}