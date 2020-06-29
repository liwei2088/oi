#include <iostream>
using namespace std;
typedef long long LL;
LL a[200005];
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        LL mx = -1e18, ans = -1e18;
        for (int i = k; i + k <= n; i++) {
            mx = max(mx, a[i] - a[i - k]);
            ans = max(ans, mx + a[i + k] - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}