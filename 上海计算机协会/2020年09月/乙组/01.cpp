#include <iostream>
using namespace std;
int n, a[200010], f[200010];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i + n] = a[i];
    }
    int ans = -1e9;
    for (int i = 1; i < 2 * n; i++) {
        f[i] = max(a[i], a[i] + f[i - 1]);
        ans = max(ans, f[i]);
    }
    cout << ans;
    return 0;
}