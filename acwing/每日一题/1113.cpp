#include <cstdio>
#include <iostream>
using namespace std;
int n, m, sx, sy, ans;
char g[25][25];
int dr[][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void dfs(int x, int y) {
    g[x][y] = '#';
    ans++;
    for (int i = 0; i < 4; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy] == '.')
            dfs(xx, yy);
    }
}

int main() {
    while (cin >> m >> n && n != 0 && m != 0) {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                cin >> g[i][j];
                if (g[i][j] == '@') {
                    sx = i, sy = j;
                }
            }
        ans = 0;
        dfs(sx, sy);
        cout << ans << endl;
    }
    return 0;
}