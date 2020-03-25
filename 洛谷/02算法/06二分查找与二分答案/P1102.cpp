#include <algorithm>
#include <iostream>
using namespace std;
const int N = 200005;
int n, c, a[N];
int main() {
    cin >> n >> c;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        int lt = lower_bound(a + 1, a + n + 1, a[i] + c) - a;
        int rt = upper_bound(a + 1, a + n + 1, a[i] + c) - a;
        ans += rt - lt;
    }
    cout << ans;
    return 0;
}