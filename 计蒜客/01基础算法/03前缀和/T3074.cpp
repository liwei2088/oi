#include <cstdio>
#include <iostream>
using namespace std;
const long long MOD = 1000000007;
long long n, q;
long long sum[100005], sum2[100005];
int main() {
    long long l, r, t;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &t);
        sum[i] = sum[i - 1] + t;
        sum2[i] = sum2[i - 1] + sum[i];
    }
    scanf("%lld", &q);
    long long ans = 0;
    while (q--) {
        scanf("%lld%lld", &l, &r);
        ans += sum2[r] - sum2[l - 1] - sum[l - 1] * (r - l + 1) % MOD;
        ans %= MOD;
    }
    printf("%lld", ans);
    return 0;
}