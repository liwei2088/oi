#include <cstdio>
#include <iostream>
using namespace std;
const int N = 200005;
int n, m, w[N], v[N], L[N], R[N], cnt[N];
long long S, sum[N];

long long check(int W) {
    // cnt[]计算产品个数，sum[]计算产品的价值和
    for (int i = 1; i <= n; i++) {
        if (w[i] >= W) {
            sum[i] = sum[i - 1] + v[i];
            cnt[i] = cnt[i - 1] + 1;
        } else {
            sum[i] = sum[i - 1];
            cnt[i] = cnt[i - 1];
        }
    }
    long long res = 0;
    for (int i = 1; i <= m; i++)
        res += (cnt[R[i]] - cnt[L[i] - 1]) * (sum[R[i]] - sum[L[i] - 1]);
    return res;
}

int main() {
    scanf("%d%d%lld", &n, &m, &S);
    for (int i = 1; i <= n; i++) scanf("%d%d", &w[i], &v[i]);
    for (int i = 1; i <= m; i++) scanf("%d%d", &L[i], &R[i]);
    int l = 0, r = 1e6 + 1;  //需要考虑到左右两侧边界
    while (l < r) {
        int m = (l + r + 1) >> 1;
        if (check(m) >= S)
            l = m;
        else
            r = m - 1;
    }
    printf("%lld\n", min(abs(S - check(r)), abs(S - check(r + 1))));
    return 0;
}