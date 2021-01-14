#include <iostream>
using namespace std;
int n, t;
char g[305][305];
int dr[][2] = {{1, 0}, {-1, 0}, {0, 1},  {0, -1},
               {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
void dfs(int x, int y) {
    g[x][y] = '*';
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && g[x][y] != '*')
            dfs(xx, yy);
    }
}

int get(int x, int y) {
    int res = 0;
    for (int i = 0; i < 8; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (g[xx][yy] == '*') res++;
    }
    return res;
}

int main() {
    cin >> t;
    for (int k = 1; k <= t; k++) {
        cout << "Case #" << k << ":";
        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) cin >> g[i][j];
        //遍历标记每一个位置的周围地雷数
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (g[i][j] != '*') g[i][j] = get(i, j) + '0';
        int ans = 0;
        //搜索标记'0'的位置
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (g[i][j] == '0') {
                    ans++;
                    dfs(i, j);
                }
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (g[i][j] != '*') ans++;
        cout << ans << endl;
    }
    return 0;
}