#include <iostream>
using namespace std;
int n, m, w[1005], v[1005], f[1005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = v[i]; j <= m; j++) f[j] = max(f[j], f[j - v[i]] + w[i]);
    cout << f[m];
    return 0;
}
