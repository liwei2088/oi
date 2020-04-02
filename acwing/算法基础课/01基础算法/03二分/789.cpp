//#include <algorithm>
#include <iostream>
using namespace std;
const int N = 100005;
int n, q, a[N];

int lower_bound(int q[], int l, int r, int x) {
    while (l < r) {
        int m = (l + r) >> 1;
        if (q[m] >= x)
            r = m;
        else
            l = m + 1;
    }
    return l;
}

int upper_bound(int q[], int l, int r, int x) {
    while (l < r) {
        int m = (l + r + 1) >> 1;
        if (q[m] <= x)
            l = m;
        else
            r = m - 1;
    }
    return l;
}

int main() {
    int x, lt, rt;
    cin >> n >> q;
    for (int i = 0; i < n; i++) cin >> a[i];
    while (q--) {
        cin >> x;
        lt = lower_bound(a, 0, n - 1, x);
        // lt = lower_bound(a, a + n, x) - a;
        if (a[lt] != x) {
            cout << "-1 -1" << endl;
            continue;
        }
        rt = upper_bound(a, 0, n - 1, x);
        // rt = upper_bound(a, a + n, x) - a;
        // cout << lt << " " << rt - 1 << endl;
        cout << lt << " " << rt << endl;
    }
    return 0;
}