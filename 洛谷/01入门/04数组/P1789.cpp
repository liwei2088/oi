#include <iostream>
using namespace std;
int n, m, k, a[105][105];
int dr[][2] = {{0, 0}, {1, 0},  {0, 1},   {-1, 0}, {0, -1}, {-2, 0}, {2, 0},
               {0, 2}, {0, -2}, {-1, -1}, {1, 1},  {-1, 1}, {1, -1}};
int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = 0; j < 13; j++) {
            a[x + dr[j][0]][y + dr[j][1]] = 1;
        }
    }
    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = x - 2; j <= x + 2; j++)
            for (int k = y - 2; k <= y + 2; k++) a[j][k] = 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 0) ans++;
    cout << ans;
    return 0;
}