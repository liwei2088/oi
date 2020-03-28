#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 10005;
const double PI = acos(-1);
int n, f, a[N];

bool check(double k) {
    int res = 0;
    for (int i = 1; i <= n; i++) res += int(a[i] / k);
    return res >= (f + 1);
}

double bsearch(double l, double r) {
    for (int i = 1; i <= 100; i++) {
        double m = (l + r) / 2;
        if (check(m))
            l = m;
        else
            r = m;
    }
    return l;
}

int main() {
    int x, mx;
    cin >> n >> f;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[i] = x * x;
        mx = max(mx, a[i]);
    }
    printf("%.3lf", PI * bsearch(0, mx));
    return 0;
}