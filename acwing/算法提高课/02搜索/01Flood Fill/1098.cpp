#include <cstdio>
#include <iostream>
using namespace std;
const int N = 55;
int n, m, g[N][N];
bool st[N][N];
int dr[][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
struct node {
    int x, y;
} q[N * N];

int dfs(int x, int y) {
    int res = 0;
    int f = 0, r = -1;
    q[++r] = {x, y};
    st[x][y] = true;
    res++;
    while (f <= r) {
        int fx = q[f].x, fy = q[f].y;
        f++;
        for (int i = 0; i < 4; i++) {
            if ((g[fx][fy] >> i & 1) == 0) {
                int xx = fx + dr[i][0];
                int yy = fy + dr[i][1];
                if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && !st[xx][yy]) {
                    q[++r] = {xx, yy};
                    st[xx][yy] = true;
                    res++;
                }
            }
        }
    }
    return res;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> g[i][j];
    int ans = 0, mx = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (!st[i][j]) {
                ans++;
                mx = max(mx, dfs(i, j));
            }
    printf("%d\n%d\n", ans, mx);
    return 0;
}