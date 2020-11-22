#include <iostream>
using namespace std;
int n, m, v[105], w[105], s[105], f[105];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i] >> s[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--)
            for (int k = 0; k <= s[i] && k * v[i] <= j; k++)
                f[j] = max(f[j], f[j - k * v[i]] + k * w[i]);
    cout << f[m];
    return 0;
}