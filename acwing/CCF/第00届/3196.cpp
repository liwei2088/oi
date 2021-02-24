#include <cstdio>
#include <iostream>
using namespace std;
const int N = 55;
int n, m;
char g[N][N];
bool st1[N][N], st2[N][N];
int dr[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool check(int x, int y, int k) {
    if (g[x][y] == '+') return true;
    if (g[x][y] == '.' && k == 1) return true;
    if (g[x][y] == '-' && k >= 2) return true;
    if (g[x][y] == '|' && k <= 1) return true;
    return false;
}

void dfs1(int x, int y) {
    st1[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        //这里check应该是检查上一个位置是否能移动到新位置
        if (check(x, y, i) && !st1[xx][yy] && g[xx][yy] != '#') {
            dfs1(xx, yy);
        }
    }
}

void dfs2(int x, int y) {
    st2[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        int k;
        if (i == 0)
            k = 1;
        else if (i == 1)
            k = 0;
        else if (i == 2)
            k = 3;
        else if (i == 3)
            k = 2;
        //这里check是当前位置能否由上一个位置移动到
        if (check(xx, yy, k) && !st2[xx][yy]) {
            dfs2(xx, yy);
        }
    }
}

int main() {
    int sx, sy, ex, ey;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'S') sx = i, sy = j, g[i][j] = '+';
            if (g[i][j] == 'T') ex = i, ey = j, g[i][j] = '+';
        }
    dfs1(sx, sy);        //从起点开始搜索 遍历所有能到达的点
    if (!st1[ex][ey]) {  //如果从起点不能到达终点
        cout << "I'm stuck!";
        return 0;
    }
    //反向的搜索 因为是从某个格子到终点  搜索是从终点到某个格子
    dfs2(ex, ey);

    int res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (st1[i][j] && !st2[i][j]) res++;
        }
    }
    cout << res;
    return 0;
}