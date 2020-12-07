#include <iostream>
using namespace std;
int n, g[505][505], d[505], p[1050], m, tt;

void dfs(int u) {
    for (int v = 1; v <= n; v++) {
        if (g[u][v]) {
            g[u][v]--;
            g[v][u]--;
            dfs(v);
        }
    }
    p[++tt] = u;
}

int main() {
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        g[a][b]++;  //两点之间可能有多条边
        g[b][a]++;
        d[a]++;
        d[b]++;
        n = max(n, max(a, b));
    }
    int s = 1;
    for (int i = 1; i <= n; i++) {
        if (d[i] % 2 == 1) {
            s = i;
            break;
        }
    }
    dfs(s);
    for (int i = tt; i >=1; i--) cout << p[i] << endl;
    return 0;
}