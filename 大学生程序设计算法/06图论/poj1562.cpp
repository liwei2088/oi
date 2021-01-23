#include <cstdio>
#include <iostream>
using namespace std;
int n, m;
char g[105][105];
int dr[][2] = {{1, 0}, {0, 1},   {-1, 0}, {0, -1},
               {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};

void dfs(int x, int y) {
    g[x][y] = '*';
    for (int i = 0; i < 8; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy] == '@') {
            dfs(xx, yy);
        }
    }
}

int main() {
    while (cin >> n >> m && n && m) {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) cin >> g[i][j];
        int ans = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (g[i][j] == '@') {
                    ans++;
                    dfs(i, j);
                }
        cout << ans << endl;
    }

    return 0;
}