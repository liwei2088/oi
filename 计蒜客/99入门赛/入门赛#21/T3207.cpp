#include <iostream>
using namespace std;
int n, k, p[105];
long long f[10010];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> p[i];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 10000; j >= p[i]; j--) f[j] = (f[j] + f[j - p[i]]) % 10007;
    int ans = 0;
    for (int i = k; i <= 10000; i++) ans = (ans + f[i]) % 10007;
    cout << ans;
    return 0;
}