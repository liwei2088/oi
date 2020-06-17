#include <iostream>
using namespace std;
const int N = 105;
int n, m;
int g[N][N];
bool st[N][N];
struct node {
    int x, y, s;
} q[N * N];
int dr[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int bfs(int x, int y) {
    st[x][y] = true;
    int r = 1, f = 1;
    q[r].x = x;
    q[r].y = y;
    q[r].s = 0;
    r++;
    while (f <= r) {
        int fx = q[f].x;
        int fy = q[f].y;
        int fs = q[f].s;
        f++;
        if (fx == n && fy == m) {
            return fs;
        }
        for (int i = 0; i < 4; i++) {
            int xx = fx + dr[i][0];
            int yy = fy + dr[i][1];
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy] == 0) {
                q[r].x = xx;
                q[r].y = yy;
                q[r].s = fs + 1;
                st[xx][yy] = true;
                r++;
            }
        }
    }
    return -1;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> g[i][j];
    cout << bfs(1, 1);
    return 0;
}