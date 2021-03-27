/**
 * 喷水装置
 * url: https://loj.ac/p/10002
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    double begin, end;
} a[15005];
bool cmp(node x, node y) { return x.begin < y.begin; }
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, L, W;
        scanf("%d%d%d", &n, &L, &W);
        int m = 0;
        for (int i = 1; i <= n; i++) {
            int x, r;
            scanf("%d%d", &x, &r);
            if (r <= W / 2.0) continue;
            m++;
            a[m].begin = x - sqrt(r * r - (W / 2.0) * (W / 2.0));
            a[m].end = x + sqrt(r * r - (W / 2.0) * (W / 2.0));
        }
        sort(a + 1, a + m + 1, cmp);
        bool f = false;
        int ans = 0;
        double st = 0;
        for (int i = 1; i <= m; i++) {
            int j = i;
            double mxend = -1;
            while (j <= m && a[j].begin <= st) {
                mxend = max(mxend, a[j].end);
                j++;
            }
            if (mxend < st) break;
            ans++;
            if (mxend >= L) {
                f = true;
                break;
            }
            st = mxend;
            i = j - 1;
        }
        if (f)
            printf("%d\n", ans);
        else
            puts("-1");
    }
    return 0;
}