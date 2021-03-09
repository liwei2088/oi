#include <cstring>
#include <iostream>
using namespace std;
const int N = 105;
int n, m, q;
char g[N][N];
bool st[N][N];
int dr[][2] = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}};
void dfs(int x, int y, char c) {
    st[x][y] = true;
    g[x][y] = c;
    for (int i = 0; i < 4; i++) {
        int xx = x + dr[i][0], yy = y + dr[i][1];
        if (xx >= 0 && xx < m && yy >= 0 && yy < n && !st[xx][yy]) {
            if (g[xx][yy] == '|' || g[xx][yy] == '-' || g[xx][yy] == '+')
                continue;
            dfs(xx, yy, c);
        }
    }
}

int main() {
    cin >> m >> n >> q;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) g[i][j] = '.';
    while (q--) {
        int op;
        cin >> op;
        if (op == 0) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 == x2) {
                if (y1 > y2) swap(y1, y2);
                for (int y = y1; y <= y2; y++)
                    if (g[x1][y] == '-' || g[x1][y] == '+')
                        g[x1][y] = '+';
                    else
                        g[x1][y] = '|';
            } else if (y1 == y2) {
                if (x1 > x2) swap(x1, x2);
                for (int x = x1; x <= x2; x++)
                    if (g[x][y1] == '|' || g[x][y1] == '+')
                        g[x][y1] = '+';
                    else
                        g[x][y1] = '-';
            }
        } else {
            int x, y;
            char c;
            cin >> x >> y >> c;
            memset(st, 0, sizeof(st));
            dfs(x, y, c);
        }
    }
    //题目要求左下角坐标是[0,0]
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) cout << g[j][i];
        cout << endl;
    }
    return 0;
}