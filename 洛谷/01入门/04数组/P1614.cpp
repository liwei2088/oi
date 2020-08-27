#include <iostream>
using namespace std;
int n, m, a[3005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 1e9;
    for (int i = 1; i <= n - m + 1; i++) {
        int s = 0;
        for (int j = 0; j < m; j++) {
            s += a[i + j];
        }
        ans = min(ans, s);
    }
    cout << ans;
    return 0;
}