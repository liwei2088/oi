#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int n;
double a[305];
int main() {
    double mx, mi, sum;
    cin >> n;
    cin >> a[1];
    sum = mx = mi = a[1];
    int mxi = 1, mii = 1;
    for (int i = 2; i <= n; i++) {
        cin >> a[i];
        if (mx < a[i]) {
            mx = a[i];
            mxi = i;
        }
        if (mi > a[i]) {
            mi = a[i];
            mii = i;
        }
        sum += a[i];
    }
    double avg = (sum - mx - mi) / (n - 2);
    double ans = 0;
    for (int i = 1; i <= n; i++) {
        if (i != mxi && i != mii) {
            ans = max(ans, fabs(a[i] - avg));
        }
    }
    printf("%.2lf %.2lf", avg, ans);
    return 0;
}