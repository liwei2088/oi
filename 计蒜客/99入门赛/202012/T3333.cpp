#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, m;
int main() {
    scanf("%d%d", &n, &m);
    long long ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            int t;
            scanf("%d", &t);
            ans += abs(i - j) * 1L * t;
        }
    printf("%lld", ans);
    return 0;
}