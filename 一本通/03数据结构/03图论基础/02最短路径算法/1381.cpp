#include <cstring>
#include <iostream>
using namespace std;
int n, m, g[2005][2005], d[2005];
bool vis[2005];

int dijkstra() {
    memset(d, 0x3f, sizeof(d));
    d[1] = 0;
    for (int i = 1; i <= n; i++) {
        int t = -1;
        for (int j = 1; j <= n; j++)
            if (!vis[j] && (t == -1 || d[t] > d[j])) t = j;
        vis[t] = true;
        for (int j = 1; j <= n; j++) d[j] = min(d[j], d[t] + g[t][j]);
    }
    if (d[n] == 0x3f3f3f3f) return -1;
    return d[n];
}

int main() {
    cin >> n >> m;
    memset(g, 0x3f, sizeof(g));
    for (int i = 1; i <= m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        g[a][b] = min(g[a][b], w);
        g[b][a] = min(g[b][a], w);
    }
    int res = dijkstra();
    cout << res;
    return 0;
}