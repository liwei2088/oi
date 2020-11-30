#include <algorithm>
#include <iostream>
using namespace std;
int n, a[100005], b[100005], mp[100005];
int stk[100005], tp;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i], mp[a[i]] = i;
    for (int i = 1; i <= n; i++) cin >> b[i], b[i] = mp[b[i]];
    for (int i = 1; i <= n; i++) {
        if (tp == 0 || b[i] > stk[tp]) {
            stk[++tp] = b[i];
        } else {
            *lower_bound(stk + 1, stk + tp + 1, b[i]) = b[i];
        }
    }
    cout << tp;
    return 0;
}