#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N];
int main() {
    int x, idx;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    while (m--) {
        scanf("%d", &x);
        idx = lower_bound(a + 1, a + n + 1, x) - a;
        if (idx > n)
            puts("-1");
        else
            printf("%d\n", a[idx]);
    }
    return 0;
}