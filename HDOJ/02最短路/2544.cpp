#include <iostream>
using namespace std;
const int INF = 0x3f3f3f3f;
int n, m, g[105][105];

int floyd() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    return g[1][n];
}

int main() {
    while (~scanf("%d%d", &n, &m)) {
        if (n == 0 && m == 0) return 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i == j)
                    g[i][j] = 0;
                else
                    g[i][j] = INF;
        for (int i = 1; i <= m; i++) {
            int a, b, c;
            scanf("%d%d%d", &a, &b, &c);
            g[a][b] = g[b][a] = c;
        }
        int res = floyd();
        printf("%d\n", res);
    }
    return 0;
}