#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int n, m;
char g[205][205];
int sx, sy, ex, ey;
struct node {
    int x, y, p;
} q[40005];
int dr[][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
bool st[205][205];

int bfs(int x, int y) {
    int f = 0, r = -1;
    q[++r] = {x, y, 0};
    st[x][y] = true;
    while (f <= r) {
        int fx = q[f].x, fy = q[f].y, fp = q[f].p;
        f++;
        if (fx == ex && fy == ey) return fp;
        for (int i = 0; i < 4; i++) {
            int xx = fx + dr[i][0];
            int yy = fy + dr[i][1];
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy] == '.' &&
                !st[xx][yy]) {
                q[++r] = {xx, yy, fp + 1};
                st[xx][yy] = true;
            }
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(st, 0, sizeof(st));
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                cin >> g[i][j];
                if (g[i][j] == 'S') sx = i, sy = j;
                if (g[i][j] == 'E') ex = i, ey = j, g[i][j] = '.';
            }
        int k = bfs(sx, sy);
        if (k == -1)
            cout << "oop!" << endl;
        else
            cout << k << endl;
    }
    return 0;
}