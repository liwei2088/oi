#include <cstdio>
#include <iostream>
using namespace std;
int n, m, v[105];
long long f[10005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> v[i];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--) f[j] += f[j - v[i]];
    cout << f[m];
    return 0;
}