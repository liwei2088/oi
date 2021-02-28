#include <cstdio>
#include <iostream>
using namespace std;
const int N = 3005;
int n, a[N], b[N], f[N][N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) {
        int maxv = 1;
        for (int j = 1; j <= n; j++) {
            f[i][j] = f[i - 1][j];
            if (a[i] == b[j]) f[i][j] = max(f[i][j], maxv);
            if (a[i] > b[j]) maxv = max(maxv, f[i - 1][j] + 1);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, f[n][i]);
    cout << ans;
    return 0;
}