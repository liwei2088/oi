#include <cstring>
#include <iostream>
using namespace std;
int n, a[105][105], f[105][105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    memset(f, 0x3f, sizeof(f));
    f[0][1] = f[1][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            f[i][j] = min(f[i - 1][j], f[i][j - 1]) + a[i][j];
        }
    }
    cout << f[n][n];
    return 0;
}