#include <cstdio>
#include <iostream>
using namespace std;
int n, m, a[105][105];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            int x;
            cin >> x;
            a[j][m - i + 1] = x;
        }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}