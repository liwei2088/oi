#include <cstdio>
#include <iostream>
using namespace std;
int n, m, v[105], w[105], f[1005];
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--) 
            f[j] = max(f[j], f[j - v[i]] + w[i]);
    cout << f[m];
    return 0;
}