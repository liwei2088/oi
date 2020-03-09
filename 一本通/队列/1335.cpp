#include <iostream>
#include <queue>
using namespace std;
struct node {
    int x, y;
} q[10010];
int n, m, g[110][110];
int dr[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y) {
    g[x][y] = 0;
    int f = 1, r = 1;
    q[r].x = x;
    q[r].y = y;
    r++;
    while (f < r) {
        int fx = q[f].x;
        int fy = q[f].y;
        f++;
        for (int i = 0; i < 4; i++) {
            int xx = fx + dr[i][0];
            int yy = fy + dr[i][1];
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy]) {
                q[r].x = xx;
                q[r].y = yy;
                r++;
                dfs(xx, yy);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> g[i][j];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (g[i][j]) {
                ans++;
                dfs(i, j);
            }
    cout << ans;
    return 0;
}