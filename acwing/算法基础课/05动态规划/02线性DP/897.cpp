#include <cstdio>
#include <iostream>
using namespace std;
string a, b;
int n, m, f[1005][1005];
int main() {
    cin >> n >> m;
    cin >> a >> b;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i - 1] == b[j - 1])  //注意下标从0开始 但f数组从1开始
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
    cout << f[n][m];
    return 0;
}