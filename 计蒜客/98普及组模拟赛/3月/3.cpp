#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    int l, w, h;
} a[305];
int m, n, f[305];
int g[305][305];

// x<y
bool check(node x, node y) {
    if (min(x.l, x.w) > min(y.l, y.w) && max(x.l, x.w) > max(y.l, y.w))
        return true;
    return false;
}

int dfs(int k) {
    if (f[k]) return f[k];
    int res = 0;
    for (int i = 1; i <= n; i++)
        if (g[k][i]) res = max(res, dfs(i));
    if (res == 0) return f[k] = a[k].h;
    return f[k] = res + a[k].h;
}

int main() {
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        a[++n].l = x, a[n].w = y, a[n].h = z;
        a[++n].l = x, a[n].w = z, a[n].h = y;
        a[++n].l = y, a[n].w = z, a[n].h = x;
    }
    //构建有向无环图 i->j 第i个箱子上可以放置第j个箱子
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (check(a[i], a[j])) g[i][j] = 1;
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, dfs(i));
    cout << ans;
    return 0;
}