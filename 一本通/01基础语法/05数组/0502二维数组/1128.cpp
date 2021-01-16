#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int n, m, a[105][105], b[105][105];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 || i == n || j == 1 || j == m) {
                b[i][j] = a[i][j];
            } else {
                b[i][j] = round((a[i][j] + a[i + 1][j] + a[i - 1][j] +
                                a[i][j + 1] + a[i][j - 1]) /
                               5.0);
            }
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}