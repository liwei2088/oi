#include <iostream>
using namespace std;
int n, m, a[100005];

bool check(double x) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += int(a[i] / x);
    }
    return res >= m;
}

double bsearch(double l, double r) {
    while (r - l >= 1e-4) {
        double mid = (l + r) / 2;
        if (check(mid)) l = mid;
        else r = mid;
    }
    return l;
}

int main() {
    cin >> n >> m;
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    double ans = bsearch(0, mx);
    printf("%.2lf", ans);
    return 0;
}