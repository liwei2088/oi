#include <algorithm>
#include <iostream>
using namespace std;
const int N = 100005;
int m, n, a[N];
int main() {
    int x, idx;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) cin >> a[i];
    sort(a + 1, a + m + 1);
    long long ans = 0;
    while (n--) {
        cin >> x;
        idx = lower_bound(a + 1, a + m + 1, x) - a;
        if (idx == 1)  //需要特判一下左边界 右边界不需要特判
            ans += abs(x - a[1]);
        else
            ans += min(abs(x - a[idx]), abs(x - a[idx - 1]));
    }
    cout << ans;
    return 0;
}