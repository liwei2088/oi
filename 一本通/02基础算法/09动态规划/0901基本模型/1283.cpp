#include <iostream>
using namespace std;
int n, a[1005], f[1005], g[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i] > a[j]) f[i] = max(f[i], f[j] + 1);
    }
    int ans = 0;
    for (int i = n; i >= 1; i--) {
        g[i] = 1;
        for (int j = n; j > i; j--)
            if (a[i] > a[j]) g[i] = max(g[i], g[j] + 1);
        ans = max(ans, f[i] + g[i] - 1);
    }
    cout << ans;
    return 0;
}