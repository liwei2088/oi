#include <cstdio>
#include <iostream>
using namespace std;
const int N = 35, M = 20005;
int n, m, v[N], f[M];
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--) f[j] = max(f[j], f[j - v[i]] + v[i]);
    cout << m - f[m];
    return 0;
}