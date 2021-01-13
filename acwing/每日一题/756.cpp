#include <iostream>
using namespace std;
int a[105][105], n, m;
int main() {
    cin >> n >> m;
    int t = 0, i = 1, j = 0;
    while (t < n * m) {
        while (a[i][j + 1] == 0 && j + 1 <= m) a[i][++j] = ++t;
        while (a[i + 1][j] == 0 && i + 1 <= n) a[++i][j] = ++t;
        while (a[i][j - 1] == 0 && j - 1 >= 1) a[i][--j] = ++t;
        while (a[i - 1][j] == 0 && i - 1 >= 1) a[--i][j] = ++t;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}