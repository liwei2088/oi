#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, p, a[N], b[N];

bool check(double k) {
    double q = k * p;
    for (int i = 1; i <= n; i++) {
        if (a[i] * k <= b[i]) continue;
        q -= a[i] * k - b[i];
    }
    return q >= 0;
}

int main() {
    cin >> n >> p;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    double l = 0, r = 1e10, m;
    for (int i = 1; i <= 100; i++) {
        m = (l + r + 1) / 2;
        if (check(m))
            l = m;
        else
            r = m - 1;
    }
    if (l >= 1e10)
        puts("-1");
    else
        printf("%.10lf", l);
    return 0;
}