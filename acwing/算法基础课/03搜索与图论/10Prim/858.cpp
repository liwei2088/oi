#include <cstring>
#include <iostream>
using namespace std;
const int INF = 0x3f3f3f3f;
int n, m, g[505][505], d[505];
bool st[505];

int prim() {
    int res = 0;
    memset(d, 0x3f, sizeof(d));
    d[1] = 0;
    for (int i = 1; i <= n; i++) {
        int t = 0;
        for (int j = 1; j <= n; j++)
            if (!st[j] && d[t] > d[j]) t = j;
        if (d[t] == INF) return INF;
        st[t] = true;
        res += d[t];
        for (int j = 1; j <= n; j++)
            if (!st[j]) d[j] = min(d[j], g[t][j]);
    }
    return res;
}

int main() {
    cin >> n >> m;
    memset(g, 0x3f, sizeof(g));
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = g[b][a] = min(g[a][b], c);
    }
    int k = prim();
    if (k == INF) cout << "impossible";
    else cout << k;
    return 0;
}