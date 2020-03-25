#include <iostream>
using namespace std;
const int N = 1E6 + 5;
int n, m, a[N];

int lower_bound(int q[], int l, int r, int k) {
    while (l < r) {
        int m = (l + r) >> 1;
        if (q[m] >= k)
            r = m;
        else
            l = m + 1;
    }
    if (q[l] == k) return l;
    return -1;
}

int main() {
    int x;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (m--) {
        cin >> x;
        cout << lower_bound(a, 1, n, x) << " ";
    }
    return 0;
}