#include <iostream>
using namespace std;
int n, a[100005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0, mx = a[1];
    for (int i = 2; i <= n; i++) {
        mx = max(mx, a[i]);
        if (mx > a[i]) ans = max(ans, mx - a[i]);
    }
    cout << ans;
    return 0;
}