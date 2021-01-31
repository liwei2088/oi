#include <cstdio>
#include <iostream>
using namespace std;
int n, m, w[505], v[505], f[45010];
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= w[i]; j--) f[j] = max(f[j], f[j - w[i]] + w[i]);
    cout << f[m];
    return 0;
}