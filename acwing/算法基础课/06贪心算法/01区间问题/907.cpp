#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    int l, r;
} a[100005];
int n, st, ed;

bool cmp(node x, node y) { return x.l < y.l; }

int main() {
    scanf("%d%d", &st, &ed);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d%d", &a[i].l, &a[i].r);
    sort(a + 1, a + n + 1, cmp);
    int ans = 0;
    bool f = false;
    for (int i = 1; i <= n; i++) {
        int j = i, r = -2e9;
        while (j <= n && a[j].l <= st) {
            r = max(r, a[j].r);
            j++;
        }
        if (r < st) {
            ans = -1;
            break;
        }
        ans++;
        if (r >= ed) {
            f = true;
            break;
        }
        st = r;
        i = j - 1;
    }
    if (f)
        cout << ans;
    else
        cout << -1;
    return 0;
}