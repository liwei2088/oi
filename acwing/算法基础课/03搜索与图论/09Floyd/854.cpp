#include <iostream>
using namespace std;
const int INF = 1e9;
int n, m, q, g[205][205];  //邻接矩阵存储

void floyd() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main() {
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j)
                g[i][j] = 0;
            else
                g[i][j] = INF;
    for (int i = 1; i <= m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        g[a][b] = min(g[a][b], w);
    }
    floyd();
    while (q--) {
        int a, b;
        cin >> a >> b;
        if (g[a][b] > INF / 2)
            cout << "impossible" << endl;
        else
            cout << g[a][b] << endl;
    }
    return 0;
}