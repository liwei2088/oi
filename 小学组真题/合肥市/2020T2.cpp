#include <iostream>
using namespace std;
int n, a[10005], p, q;
int b[505];
int main() {
    int mx = 0, mi = 500, mc = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mi = min(mi, a[i]);
        b[a[i]]++;
        mc = max(mc, b[a[i]]);
    }
    cin >> p >> q;
    cout << mi << " " << b[mi] << endl;
    cout << mx << " " << b[mx] << endl;
    for (int i = 1; i <= 500; i++) {
        if (b[i] == mc) {
            cout << i << " " << mc << " ";
        }
    }
    cout << endl;
    int ans = 0;
    for (int i = p; i <= q; i++) ans += b[i];
    cout << ans;
    return 0;
}