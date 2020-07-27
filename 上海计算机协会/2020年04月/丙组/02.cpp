#include <algorithm>
#include <iostream>
using namespace std;
int n, m;
char a[105][105], b[105][105];
int dr[][2] = {{1, 0},  {1, 1},   {0, 1},  {-1, 1},
               {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j], b[i][j] = a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            int cnt = 0;
            for (int k = 0; k < 8; k++) {
                int xx = i + dr[k][0];
                int yy = j + dr[k][1];
                if (a[xx][yy] == '*') cnt++;
            }
            if ((cnt == 2 || cnt == 3) && a[i][j] == '*') continue;
            if ((cnt < 2 || cnt > 3) && a[i][j] == '*') {
                b[i][j] = '.';
                continue;
            }
            if (cnt == 3 && a[i][j] == '.') b[i][j] = '*';
        }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] != b[i][j]) {
                cout << "Other";
                return 0;
            }
    cout << "Still life";
    return 0;
}