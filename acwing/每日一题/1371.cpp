#include <cstdio>
#include <iostream>
using namespace std;
int n, m, w[10005];
long long f[10005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> w[i];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = w[i]; j <= m; j++) f[j] += f[j - w[i]];
    cout << f[m];
    return 0;
}