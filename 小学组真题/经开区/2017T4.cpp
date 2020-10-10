#include <iostream>
using namespace std;
char g[1005][1005];
int dr[][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int n, m, sx, sy, ans;
bool st[1005][1005];
void dfs(int x, int y) {
    st[x][y] = true;
    ans++;
    for (int i = 0; i < 4; i++) {
        int dx = x + dr[i][0];
        int dy = y + dr[i][1];
        if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && !st[dx][dy] &&
            g[dx][dy] == '1') {
            st[dx][dy] = true;
            dfs(dx, dy);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'G') {
                sx = i;
                sy = j;
            }
        }
    dfs(sx, sy);
    cout << ans;
    return 0;
}