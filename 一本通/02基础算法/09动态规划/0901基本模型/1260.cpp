#include <iostream>
using namespace std;
int n, a[1005], f[1005], g[1005];
int main() {
    int x;
    while (cin >> x) a[++n] = x;
    int ans = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i] <= a[j]) f[i] = max(f[i], f[j] + 1);
        ans = max(ans, f[i]);
        g[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i] > a[j]) g[i] = max(g[i], g[j] + 1);
        cnt = max(cnt, g[i]);
    }
    cout << ans << endl << cnt;
    return 0;
}