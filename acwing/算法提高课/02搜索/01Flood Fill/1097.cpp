#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
int n, m;
char g[N][N];
int dr[][2] = {{1, 0}, {-1, 0}, {0, 1},  {0, -1},
               {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
struct node {
    int x, y;
} q[N * N];

void bfs(int x, int y) {
    int f = 0, r = -1;
    q[++r] = {x, y};
    g[x][y] = '.';
    while (f <= r) {
        int fx = q[f].x, fy = q[f].y;
        f++;
        for (int i = 0; i < 8; i++) {
            int xx = fx + dr[i][0];
            int yy = fy + dr[i][1];
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy] == 'W') {
                q[++r] = {xx, yy};
                g[xx][yy] = '.';
            }
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> g[i][j];

    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (g[i][j] == 'W') {
                ans++;
                bfs(i, j);
            }
    printf("%d", ans);
    return 0;
}