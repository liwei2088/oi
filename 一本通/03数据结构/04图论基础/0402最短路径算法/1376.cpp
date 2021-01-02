#include <cstring>
#include <iostream>
using namespace std;
const int INF = 0x3f3f3f3f;
int n, m, g[105][105];

void floyd() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j)
                g[i][j] = 0;
            else
                g[i][j] = INF;
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = g[b][a] = c;
    }
    floyd();
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(g[1][i], ans);
    cout << ans;
    return 0;
}