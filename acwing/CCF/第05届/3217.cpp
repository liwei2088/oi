#include <cstdio>
#include <iostream>
using namespace std;
int n, a[1005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int ans = 1;
    for (int i = 1; i < n; i++)
        if (a[i] != a[i + 1]) ans++;
    printf("%d", ans);
    return 0;
}