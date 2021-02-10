#include <cstdio>
#include <iostream>
using namespace std;
const int N = 355, M = 45;
int n, m, a[N], b[5], f[M][M][M][M];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        b[x]++;
    }
    for (int i = 0; i <= b[1]; i++)
        for (int j = 0; j <= b[2]; j++)
            for (int x = 0; x <= b[3]; x++)
                for (int y = 0; y <= b[4]; y++) {
                    //下标从1开始所以+1
                    int t = a[i + j * 2 + x * 3 + y * 4 + 1];
                    f[i][j][x][y] = t;
                    if (i)
                        f[i][j][x][y] =
                            max(f[i][j][x][y], f[i - 1][j][x][y] + t);
                    if (j)
                        f[i][j][x][y] =
                            max(f[i][j][x][y], f[i][j - 1][x][y] + t);
                    if (x)
                        f[i][j][x][y] =
                            max(f[i][j][x][y], f[i][j][x - 1][y] + t);
                    if (y)
                        f[i][j][x][y] =
                            max(f[i][j][x][y], f[i][j][x][y - 1] + t);
                }
    cout << f[b[1]][b[2]][b[3]][b[4]];
    return 0;
}