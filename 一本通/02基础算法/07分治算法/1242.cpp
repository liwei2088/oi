#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 10005;
int n, k, a[N];

bool check(int x) {
    int res = 0;
    for (int i = 1; i <= n; i++) res += a[i] / x;
    return res >= k;
}

int main() {
    double x;
    int mx = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[i] = ceil(x * 100);
        mx = max(a[i], mx);
    }
    int l = 0, r = mx;
    while (l < r) {
        int m = (l + r + 1) >> 1;
        if (check(m))
            l = m;
        else
            r = m - 1;
    }
    printf("%.2lf", l / 100.0);
    return 0;
}