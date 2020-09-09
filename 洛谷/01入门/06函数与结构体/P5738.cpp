#include <cstdio>
#include <iostream>
using namespace std;
int n, m;
int main() {
    double ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int mx = 0, mi = 10, s = 0;
        for (int j = 1; j <= m; j++) {
            int x;
            cin >> x;
            mx = max(mx, x);
            mi = min(mi, x);
            s += x;
        }
        ans = max(ans, (s - mx - mi) * 1.0 / (m - 2));
    }
    printf("%.2lf", ans);
    return 0;
}