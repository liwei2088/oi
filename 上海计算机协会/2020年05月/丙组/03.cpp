#include <iostream>
using namespace std;
int n, m;
char g[105][105];
int dr[][2] = {{1, 0},  {1, 1},   {0, 1},  {-1, 1},
               {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> g[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (g[i][j] != '*') {
                int cnt = 0;
                for (int k = 0; k < 8; k++) {
                    int x = i + dr[k][0];
                    int y = j + dr[k][1];
                    if (x >= 1 && x <= n && y >= 1 && y <= m && g[x][y] == '*')
                        cnt++;
                }
                g[i][j] = cnt + '0';
            }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cout << g[i][j];
        cout << endl;
    }
    return 0;
}