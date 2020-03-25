#include <algorithm>
#include <iostream>
using namespace std;
const int N = 1000005;
long long n, m, a[N];

bool check(int k) {
    long long ans = 0;
    for (int i = 1; i <= n; i++) ans += a[i] - k >= 0 ? a[i] - k : 0;
    return ans >= m;
}

int bsearch(long long q[], int l, int r) {
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
    int l = 1e9, r = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (l > a[i]) l = a[i];
        if (r < a[i]) r = a[i];
    }
    cout << bsearch(a, l, r);
    return 0;
}