#include <iostream>
using namespace std;
const int N = 35;
int n, m, a[N][N];
bool st[N][N];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            int l = j, r = j, u = i, d = i, x = a[i][j];
            while (l >= 1 && a[i][l] == x) l--;
            while (r <= m && a[i][r] == x) r++;
            while (u >= 1 && a[u][j] == x) u--;
            while (d <= n && a[d][j] == x) d++;
            if (r - l - 1 >= 3 || d - u - 1 >= 3) st[i][j] = true;
        }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            if (st[i][j])
                cout << 0 << " ";
            else
                cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}