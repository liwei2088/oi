#include <cstdio>
#include <iostream>
using namespace std;
int n, a[1005];
int main() {
    cin >> n;
    int mx = 0, mi = 10, sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
        mi = min(mi, a[i]);
    }
    printf("%.2lf", (sum - mx - mi) * 1.0 / (n - 2));
    return 0;
}