#include <cstdio>
#include <iostream>
using namespace std;
int n, m, k, a[105][105], b[105][105], c[105][105];
int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= k; j++) cin >> b[i][j];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            for (int p = 1; p <= m; p++) c[i][j] += a[i][p] * b[p][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}