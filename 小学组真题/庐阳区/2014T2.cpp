#include <algorithm>
#include <iostream>
using namespace std;
int n, m, a[1005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int t = a[1], ans = 0;
    a[n + 1] = 1e9;
    for (int i = 2; i <= n + 1; i++) {
        if (a[i] - t >= m) {
            ans++;
            t = a[i];
        }
    }
    cout << ans;
    return 0;
}