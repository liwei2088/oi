#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mx = -1e9, ans = -1e9;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mx = max(mx, x);
        ans = max(ans, mx - x);
    }
    cout << ans;
    return 0;
}