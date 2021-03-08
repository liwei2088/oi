#include <iostream>
#include <cstdio>
using namespace std;
int n, a[1000005];
long long ans;
int main() {
    scanf("%d", &n);
    for (int i = 1, j = 0; i <= n; i++) {
        scanf("%d", &a[i]);
        if (a[i] != a[i - 1]) j = i - 1;
        ans += j;
    }
    printf("%lld", ans);
    return 0;
}