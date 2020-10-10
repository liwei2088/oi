#include <iostream>
using namespace std;
int n, m, x[505];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> x[i];
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        int t, a;
        cin >> t >> a;
        ans += x[t] * a;
    }
    cout << ans;
    return 0;
}