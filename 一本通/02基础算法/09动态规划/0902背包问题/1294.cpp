#include <cstdio>
#include <iostream>
using namespace std;
const int N = 3505, M = 12885;
int n, m, v[N], w[N], f[M];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--) f[j] = max(f[j], f[j - v[i]] + w[i]);
    cout << f[m];
    return 0;
}