#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    int t, a, b, w;
} e[10005];
int n, m, p[2005];
bool cmp(node x, node y) { return x.w < y.w; }
int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}
int main() {
    cin >> n >> m;
    int ans = 0, k = 0;
    for (int i = 1; i <= n; i++) p[i] = i;
    for (int i = 1; i <= m; i++) {
        int t, a, b, w;
        cin >> t >> a >> b >> w;
        if (t == 1) {
            ans += w;
            p[find(a)] = find(b);
        } else {
            e[++k] = {t, a, b, w};
        }
    }
    sort(e + 1, e + k + 1, cmp);
    for (int i = 1; i <= k; i++) {
        int x = find(e[i].a), y = find(e[i].b);
        if (x != y) {
            p[x] = y;
            ans += e[i].w;
        }
    }
    cout << ans;
    return 0;
}