#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int n, m, K, a[1005], f[1005][1005];
int main() {
    cin >> n >> m >> K;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= K; k++) {
            if (k == 1) {
                if (m > i)
                    f[i][k] = a[i] * a[i] + (m - i) * (m - i);
                else
                    f[i][k] = a[i] * a[i];
            } else {
                f[i][k] = 1e9;
                for (int j = i - 1; j >= 1 && (m - i + j) >= 0; j--) {
                    f[i][k] = min(f[i][k], f[j][k - 1] + a[i] * a[i] +
                                               (m - i + j) * (m - i + j));
                }
            }
        }
    }
    int ans = 1e9;
    for (int i = 1; i <= n; i++) ans = min(ans, f[i][K]);
    cout << ans;
    return 0;
}