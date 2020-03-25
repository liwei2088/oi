#include <algorithm>
#include <iostream>
using namespace std;
const int N = 100005;
int L, n, k, a[N];

bool check(int x) {
    int st = a[1], idx = 2, cnt = 0;
    while (st < L) {
        if (a[idx] - st > x) {
            cnt++;
            st = st + x;
            continue;
        }
        st = a[idx];
        idx++;
    }
    return cnt <= k;
}
int main() {
    cin >> L >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int l = 1, r = L - 1, m;
    while (l < r) {
        m = (l + r) / 2;
        if (check(m))
            r = m;
        else
            l = m + 1;
    }
    cout << l << endl;
    return 0;
}