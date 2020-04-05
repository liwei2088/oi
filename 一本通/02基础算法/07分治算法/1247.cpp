#include <iostream>
using namespace std;
const int N = 50005;
int L, n, m, a[N];

bool check(int x) {
    int res = 0, st = 0;
    for (int i = 1; i <= n + 1; i++) {
        if (a[i] - st < x) {
            res++;
            continue;
        }
        st = a[i];
    }
    return res <= m;
}

int bsearch(int q[], int l, int r) {
    while (l < r) {
        int m = (l + r + 1) >> 1;
        if (check(m))
            l = m;
        else
            r = m - 1;
    }
    return l;
}

int main() {
    int mx = 0;
    cin >> L >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    a[n + 1] = L;
    cout << bsearch(a, 0, mx);
    return 0;
}