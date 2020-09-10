#include <algorithm>
#include <iostream>
using namespace std;
int n, h, a[20005];
int main() {
    cin >> n >> h;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    int s = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        if (s <= h) {
            s += a[i];
            ans++;
        }
    }
    cout << ans;
    return 0;
}