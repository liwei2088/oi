#include <iostream>
using namespace std;
int g[11][11];
int dr[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y) {
    g[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (xx >= 1 && xx <= 10 && yy >= 1 && yy <= 10 && !g[xx][yy])
            dfs(xx, yy);
    }
}

int main() {
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++) cin >> g[i][j];
    for (int i = 1; i <= 10; i++) {
        if (!g[1][i]) dfs(1, i);
        if (!g[10][i]) dfs(10, i);
        if (!g[i][1]) dfs(i, 1);
        if (!g[i][10]) dfs(i, 10);
    }
    int ans = 0;
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
            if (!g[i][j]) ans++;
    cout << ans;
    return 0;
}