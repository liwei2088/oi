#include <algorithm>
#include <iostream>
using namespace std;
int n, k, t[200005];
struct node {
    int v, c;
} a[200005];

bool cmp(node x, node y) { return x.c < y.c; }

int main() {
    scanf("%d%d", &n, &k);
    int x, mx = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        t[x]++;
        mx = max(mx, x);
    }
    int cnt = 0;
    for (int i = 1; i <= mx; i++)
        if (t[i]) {
            cnt++;
            a[cnt].v = i;
            a[cnt].c = t[i];
        }
    sort(a + 1, a + cnt + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= max(cnt - k, 0); i++) ans += a[i].c;
    printf("%d", ans);
    return 0;
}