#include <cstdio>
#include <iostream>
using namespace std;
int n, m, f[1005][1005];
string a, b;
int main() {
    cin >> n >> a;
    cin >> m >> b;
    for (int i = 1; i <= n; i++) f[i][0] = i;
    for (int i = 1; i <= m; i++) f[0][i] = i;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i - 1] == b[j - 1])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] =
                    min(f[i - 1][j], min(f[i - 1][j - 1], f[i][j - 1])) + 1;
    cout << f[n][m];
    return 0;
}