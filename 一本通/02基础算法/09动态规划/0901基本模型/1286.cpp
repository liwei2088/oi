#include <iostream>
using namespace std;
int n, a[105], f[105], g[105];
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            f[i] = 1;
            for (int j = 1; j < i; j++)
                if (a[i] > a[j]) f[i] = max(f[i], f[j] + 1);
            ans = max(ans, f[i]);
        }
        for (int i = n; i >= 1; i--) {
            g[i] = 1;
            for (int j = n; j > i; j--)
                if (a[i] > a[j]) g[i] = max(g[i], g[j] + 1);
            ans = max(ans, g[i]);
        }
        cout << ans << endl;
    }
    return 0;
}