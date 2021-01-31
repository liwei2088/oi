#include <cstdio>
#include <iostream>
using namespace std;
int n, m, w[3005], v[3005], f[10005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= w[i]; j--) f[j] = max(f[j], f[j - w[i]] + v[i]);
    cout << f[m];
    return 0;
}