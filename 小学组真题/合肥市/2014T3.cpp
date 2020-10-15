#include <iostream>
using namespace std;
int g[1005][205], n, m;
int dr[][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
void dfs(int x, int y) {
    g[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int dx = x + dr[i][0];
        int dy = y + dr[i][1];
        if (dx >= 0 && dx <= n + 1 && dy >= 0 && dy <= m + 1 &&
            g[dx][dy] == 0) {
            dfs(dx, dy);
        }
    }
}

int main() {
    string s;
    n = 0;
    while (cin >> s) {
        n++;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '*')
                g[n][i + 1] = 1;
            else
                g[n][i + 1] = 0;
        m = s.size();
    }
    dfs(0, 0);
    int ans = 0;
    for (int i = 0; i <= n + 1; i++)
        for (int j = 0; j <= m + 1; j++)
            if (g[i][j] == 0) ans++;
    cout << ans;
    return 0;
}