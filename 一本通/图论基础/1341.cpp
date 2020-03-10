#include <cstring>
#include <iostream>
using namespace std;
const int N = 505;
int n, m, g[N][N], d[N], p[N], idx;

void work(int u) {
    for (int v = 1; v <= n; v++)
        if (g[u][v]) {
            g[u][v] = g[v][u] = 0;
            work(v);
        }
    p[++idx] = u;
}

int main() {
    memset(g, 0, sizeof(g));
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        g[x][y] = g[y][x] = 1;
        d[x]++;
        d[y]++;
    }
    int s = 1;
    for (int i = 1; i <= n; i++)
        if (d[i] % 2 == 1) s = i;
    idx = 0;
    work(s);
    for (int i = 1; i <= idx; i++) cout << p[i] << " ";
    return 0;
}