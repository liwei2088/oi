#include <iostream>
using namespace std;
int n, a[1000005], up[1000005], down[1000005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        up[i] = 1;
        if (a[i] > a[i - 1]) up[i] = up[i - 1] + 1;
    }
    for (int i = n; i >= 1; i--) {
        down[i] = 1;
        if (a[i] > a[i + 1]) down[i] = down[i + 1] + 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, up[i] + down[i] - 1);
    cout << ans;
    return 0;
}