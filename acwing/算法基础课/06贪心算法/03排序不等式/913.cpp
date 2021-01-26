#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, a[100005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    long long ans = 0, t = 0;
    for (int i = 1; i <= n; i++) {
        ans += t;
        t += a[i];
    }
    printf("%lld\n", ans);
    return 0;
}