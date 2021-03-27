/**
 * 种树
 * url: https://loj.ac/p/10001
 */

#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    int b, e, t;
} a[5005];
int n, m;
bool st[30005];
bool cmp(node x, node y) { return x.e < y.e; }
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) scanf("%d%d%d", &a[i].b, &a[i].e, &a[i].t);
    sort(a + 1, a + m + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        int k = 0;
        for (int j = a[i].b; j <= a[i].e; j++)
            if (st[j]) k++;
        if (k >= a[i].t) continue;
        for (int j = a[i].e; j >= a[i].b; j--)
            if (!st[j]) {
                st[j] = true;
                ans++;
                k++;
                if (k == a[i].t) break;
            }
    }
    printf("%d\n", ans);
    return 0;
}