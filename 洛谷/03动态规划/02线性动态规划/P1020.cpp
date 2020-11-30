#include <algorithm>
#include <iostream>
using namespace std;
int n, a[100005];
int stk[100005], tp;
int stk2[100005], tp2;
int main() {
    int x;
    while (cin >> x) a[++n] = x;
    for (int i = 1; i <= n; i++) {
        if (tp == 0 || a[i] <= stk[tp]) {
            stk[++tp] = a[i];
        } else {
            *upper_bound(stk + 1, stk + tp + 1, a[i], greater<int>()) = a[i];
        }
        if (tp == 0 || a[i] > stk2[tp2]) {
            stk2[++tp2] = a[i];
        } else {
            *lower_bound(stk2 + 1, stk2 + tp2 + 1, a[i]) = a[i];
        }
    }
    cout << tp << endl << tp2 << endl;
    return 0;
}