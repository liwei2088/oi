#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n;
struct node {
    int w, s;
} a[50005];

bool cmp(node x, node y) { return (x.w + x.s) < (y.w + y.s); }

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d%d", &a[i].w, &a[i].s);
    sort(a + 1, a + n + 1, cmp);
    long long s = 0, res = -1e18;
    for (int i = 1; i <= n; i++) {
        res = max(res, s - a[i].s);
        s += a[i].w;
    }
    printf("%d", res);
    return 0;
}