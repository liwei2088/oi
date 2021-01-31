#include <iostream>
#include <cstdio>
using namespace std;
int t, m, w[10010], v[10010];
long long f[10000010];

int main() {
    scanf("%d%d", &t, &m);
    for (int i = 1; i <= m; i++) scanf("%d%d", &w[i], &v[i]);
    for (int i = 1; i <= m; i++)
        for (int j = w[i]; j <= t; j++) f[j] = max(f[j], f[j - w[i]] + v[i]);
    printf("%lld", f[t]);
    return 0;
}