#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
int n, g[N][N];
bool st[N][N];
int dr[][2] = {{1, 0}, {0, 1},  {-1, 0}, {0, -1},
               {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
struct node {
    int x, y;
} q[N * N];

void bfs(int x, int y, bool &h, bool &l) {
    int f = 0, r = -1;
    q[++r] = {x, y};
    st[x][y] = true;
    while (f <= r) {
        int fx = q[f].x, fy = q[f].y;
        f++;
        for (int i = 0; i < 8; i++) {
            int xx = fx + dr[i][0];
            int yy = fy + dr[i][1];
            if (xx < 1 || xx > n || yy < 1 || yy > n) continue;
            if (g[fx][fy] != g[xx][yy]) {
                if (g[fx][fy] < g[xx][yy])
                    h = true;
                else
                    l = true;
            } else {
                if (!st[xx][yy]) {
                    q[++r] = {xx, yy};
                    st[xx][yy] = true;
                }
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) scanf("%d", &g[i][j]);

    int peak = 0, vally = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (!st[i][j]) {
                bool hight = false, lower = false;
                bfs(i, j, hight, lower);
                if (!hight) peak++;
                if (!lower) vally++;
            }
    cout << peak << " " << vally << endl;
    return 0;
}