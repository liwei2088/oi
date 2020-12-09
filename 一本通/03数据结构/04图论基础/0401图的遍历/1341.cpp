#include <iostream>
using namespace std;
const int N = 1005;
int n, m, g[N][N], d[N], p[N], idx;

void dfs(int u) {
    p[++idx] = u;
    for (int v = 1; v <= n; v++) {
        if (g[u][v] == 1) {
            g[u][v] = g[v][u] = 0;
            dfs(v);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        g[a][b] = g[b][a] = 1;
        d[a]++;
        d[b]++;
    }
    int s = 1;
    for (int i = 1; i <= n; i++) {
        if (d[i] % 2 == 1) {
            s = i;
            break;
        }
    }
    dfs(s);
    for (int i = 1; i <= idx; i++) cout << p[i] << " ";
    return 0;
}