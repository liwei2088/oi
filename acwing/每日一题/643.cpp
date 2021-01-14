#include <cstring>
#include <iostream>
using namespace std;
int n, m, q, t;
char g[105][105];
int dr[][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool st[105][105];
void dfs(int x, int y) {
    st[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (xx >= 0 && xx < n && yy >= 0 && yy < m && g[xx][yy] == '1' &&
            !st[xx][yy])
            dfs(xx, yy);
    }
}
int main() {
    cin >> t;
    for (int k = 1; k <= t; k++) {
        cout << "Case #" << k << ":" << endl;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) cin >> g[i][j];
        cin >> q;
        while (q--) {
            char ch;
            cin >> ch;
            if (ch == 'Q') {
                memset(st, false, sizeof(st));
                int ans = 0;
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < m; j++)
                        if (g[i][j] == '1' && !st[i][j]) {
                            dfs(i, j);
                            ans++;
                        }
                cout << ans << endl;
            } else {
                int x, y, z;
                cin >> x >> y >> z;
                g[x][y] = z + '0';
            }
        }
    }
    return 0;
}