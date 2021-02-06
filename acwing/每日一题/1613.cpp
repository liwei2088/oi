#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 10;
char g[N][N];
bool col[N][N], row[N][N], cub[5][5][N];

bool dfs(int x, int y) {
    if (y == 10) {
        x++, y = 1;
    }
    if (x == 10) {
        for (int i = 1; i <= 9; i++) printf("%s\n", g[i] + 1);
        return true;
    }
    if (g[x][y] != '.') {
        return dfs(x, y + 1);
    }
    for (int i = 1; i <= 9; i++) {
        if (!row[x][i] && !col[y][i] && !cub[(x + 2) / 3][(y + 2) / 3][i]) {
            g[x][y] = '0' + i;
            row[x][i] = col[y][i] = cub[(x + 2) / 3][(y + 2) / 3][i] = true;
            if (dfs(x, y + 1)) return true;
            g[x][y] = '.';
            row[x][i] = col[y][i] = cub[(x + 2) / 3][(y + 2) / 3][i] = false;
        }
    }
    return false;
}

int main() {
    for (int i = 1; i <= 9; i++)
        for (int j = 1; j <= 9; j++) {
            cin >> g[i][j];
            if (g[i][j] != '.') {
                int k = g[i][j] - '0';
                row[i][k] = col[j][k] = cub[(i + 2) / 3][(j + 2) / 3][k] = true;
            }
        }
    dfs(1, 1);
    return 0;
}