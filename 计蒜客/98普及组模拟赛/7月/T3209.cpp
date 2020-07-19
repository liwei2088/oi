#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
const int INF = 1e9;
int n, g[2005][2005];
int main() {
    int x, y;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &g[i][j]);
            if (g[i][j] == -1) x = i, y = j;
        }
    //先将每行的减去该行的最小值
    for (int i = 1; i <= n; i++) {
        int mi = INF;
        for (int j = 1; j <= n; j++) {
            if (g[i][j] == -1) continue;
            mi = min(mi, g[i][j]);
        }
        for (int j = 1; j <= n; j++) g[i][j] -= mi;
    }
    //再将每列的最大值去除掉 并找出矩阵中非0值
    for (int j = 1; j <= n; j++) {
        int mx = -INF;
        for (int i = 1; i <= n; i++) mx = max(mx, g[i][j]);
        for (int i = 1; i <= n; i++) g[i][j] -= mx;
    }
    //单独处理一下-1所在的行和列
    int mx = -INF;
    for (int i = 1; i <= n; i++) mx = max(mx, g[x][i]);
    for (int i = 1; i <= n; i++) g[x][i] -= mx;
    for (int i = 1; i <= n; i++) mx = max(mx, g[i][y]);
    for (int i = 1; i <= n; i++) g[i][y] -= mx;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (g[i][j] != 0) {
                cout << abs(g[i][j]) - 1;
                return 0;
            }
    return 0;
}