#include <iostream>
using namespace std;
int n, m, a[100005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int s = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        if (s + a[i] > m) {
            s = a[i];
            ans++;
        } else {
            s += a[i];
        }
    }
    if (s != 0) ans++;
    cout << ans;
    return 0;
}