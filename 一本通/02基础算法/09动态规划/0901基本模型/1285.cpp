#include <iostream>
using namespace std;
int n, a[1005], f[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = a[i];
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j]) {
                f[i] = max(f[i], f[j] + a[i]);
            }
        }
        ans = max(ans, f[i]);
    }
    cout << ans;
    return 0;
}