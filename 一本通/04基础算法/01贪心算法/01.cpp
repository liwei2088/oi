/**
 * 活动安排
 * url: https://loj.ac/p/10000
 */
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    int begin, end;
} a[1005];
int n;
bool cmp(node x, node y) { return x.end < y.end; }
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d%d", &a[i].begin, &a[i].end);
    sort(a + 1, a + n + 1, cmp);
    int ans = 1, t = a[1].end;
    for (int i = 2; i <= n; i++) {
        if (a[i].begin >= t) {
            ans++;
            t = a[i].end;
        }
    }
    printf("%d\n", ans);
    return 0;
}