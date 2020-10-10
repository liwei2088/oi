#include <iostream>
using namespace std;
int n, a[1005], b[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int t = 0;
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        if (a[i] > b[i]) t = max(t, a[i] - b[i]);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] > b[i]) {
            ans += t;
            t--;
        }
    cout << ans;
    return 0;
}