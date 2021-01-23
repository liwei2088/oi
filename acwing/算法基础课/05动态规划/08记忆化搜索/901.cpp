#include <cstdio>
#include <iostream>
using namespace std;
int n, m, g[305][305], f[305][305];
int dr[][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int dfs(int x, int y) {
    if (f[x][y]) return f[x][y];
    int res = 1;
    for (int i = 0; i < 4; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[x][y] < g[xx][yy]) {
            res = max(res, dfs(xx, yy) + 1);
        }
    }
    return f[x][y] = res;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> g[i][j];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) ans = max(ans, dfs(i, j));

    cout << ans;
    return 0;
}