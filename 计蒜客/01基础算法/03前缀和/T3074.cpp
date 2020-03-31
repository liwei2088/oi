#include <cstdio>
#include <iostream>
using namespace std;
const int MOD = 1E9 + 7;
int n, q;
long long a[100005], s[100005];
int main() {
    int l, r;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        a[i] = (a[i] + a[i - 1]) % MOD;
        s[i] = (s[i - 1] + a[i]) % MOD;
    }
    scanf("%d", &q);
    long long ans = 0;
    while (q--) {
        scanf("%d%d", &l, &r);
        long long t = a[l - 1] * (r - l + 1) % MOD;
        ans += (s[r] - s[l - 1] - t) % MOD;
        ans %= MOD;
    }
    printf("%lld", ans);
    return 0;
}