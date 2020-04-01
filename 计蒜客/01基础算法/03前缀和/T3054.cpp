#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1e5 + 5;
int n, q;
long long a[N], v[N];
int main() {
    int t;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++) {
        scanf("%lld%lld", &a[i], &v[i]);
        a[i] += a[i - 1];
    }
    while (q--) {
        scanf("%d", &t);
        int idx = lower_bound(a + 1, a + n + 1, t) - a;
        printf("%d\n", v[idx]);
    }
    return 0;
}