#include <iostream>
#include <map>
using namespace std;
const int N = 1505;
char mp[N][N];
int n, m;
int dr[][2] = {{1, 0}, {-1, 0},  {0, 1},  {0, -1},
               {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};
map<int, int> p;
int dfs(int x, int y) {
    int res = 1;
    mp[x][y] = '.';
    for (int i = 0; i < 8; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && mp[xx][yy] == '*')
            res += dfs(xx, yy);
    }
    return res;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> mp[i][j];
    int mx = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (mp[i][j] == '*') {
                int k = dfs(i, j);
                p[k]++;
                mx = max(mx, k * p[k]);
            }
    cout << p.size() << " " << mx;
    return 0;
}