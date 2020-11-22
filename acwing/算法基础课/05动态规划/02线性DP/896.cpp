#include <algorithm>
#include <iostream>
using namespace std;
int n, a[100005];
int stk[100005], tp;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (tp == 0 || stk[tp] < a[i])
            stk[++tp] = a[i];
        else
            *lower_bound(stk + 1, stk + tp + 1, a[i]) = a[i];
    }
    cout << tp;
    return 0;
}