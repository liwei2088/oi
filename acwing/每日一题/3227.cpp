#include <cstdio>
#include <iostream>
using namespace std;
int n, a[1005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int ans = 0;
    for (int i = 2; i < n; i++)
        if (a[i - 1] < a[i] && a[i] > a[i + 1] ||
            a[i - 1] > a[i] && a[i] < a[i + 1])
            ans++;
    printf("%d", ans);
    return 0;
}