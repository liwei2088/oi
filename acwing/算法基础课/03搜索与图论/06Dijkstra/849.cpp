#include <cstring>
#include <iostream>
using namespace std;
int n, m, g[505][505], dis[505];
bool st[505];

int dijkstra() {
    memset(dis, 0x3f, sizeof(dis));
    dis[1] = 0;
    for (int i = 1; i <= n; i++) {
        int t = -1;
        for (int j = 1; j <= n; j++)
            if (!st[j] && (t == -1 || dis[t] > dis[j])) t = j;
        st[t] = true;
        for (int j = 1; j <= n; j++) dis[j] = min(dis[j], dis[t] + g[t][j]);
    }
    if (dis[n] == 0x3f3f3f3f) return -1;
    return dis[n];
}

int main() {
    cin >> n >> m;
    memset(g, 0x3f, sizeof(g));
    for (int i = 1; i <= m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        g[a][b] = min(g[a][b], w);
    }
    int k = dijkstra();
    cout << k;
    return 0;
}