#include <cstdio>
#include <iostream>
using namespace std;
const int N = 305;
int n, a[N], f[N][N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
        f[i][i] = 0;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int j = i + len - 1;
            f[i][j] = 0x3f3f3f3f;
            for (int k = i; k < j; k++) {
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + a[j] - a[i - 1]);
            }
        }
    }
    cout << f[1][n];
    return 0;
}