#include <cstdio>
#include <iostream>
using namespace std;
int n, m, p[1005], q[1005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i;
    while (m--) {
        int t, x, y, u, v;
        cin >> t >> x >> y;
        if (t == 0) {
            u = find(x), v = find(y);
            if (u != v) p[u] = v;
        } else {
            //将x的敌人并入到y
            if (q[x] == 0)
                q[x] = y;
            else {
                u = find(q[x]), v = find(y);
                if (u != v) p[u] = v;
            }
            //将y的敌人并入到x
            if (q[y] == 0)
                q[y] = x;
            else {
                u = find(x), v = find(q[y]);
                if (u != v) p[u] = v;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (p[i] == i) ans++;
    cout << ans;
    return 0;
}