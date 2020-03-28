#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int n, f;
double a[10010];

bool check(double x) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) cnt += int(a[i] / x);
    return cnt >= (f + 1);
}

int main() {
    int t;
    double l = 0, r = 0;
    cin >> n >> f;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        a[i] = t * t;  
        r = max(a[i], r);
    }
    for (int i = 1; i <= 100; i++) {
        double m = (l + r + 1) / 2;
        if (check(m))
            l = m;
        else
            r = m - 1;
    }
    printf("%.3lf", l * PI);
    return 0;
}