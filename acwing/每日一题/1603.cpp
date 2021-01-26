#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, a[100005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    long long ans = 0;
    for (int i = n / 2 + 1; i <= n; i++) ans += a[i];
    for (int i = 1; i <= n / 2; i++) ans -= a[i];
    if (n % 2 == 0)
        printf("0 %d", ans);
    else
        printf("1 %d", ans);
    return 0;
}