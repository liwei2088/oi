#include <iostream>
using namespace std;
const int N = 210;
int n, a[N], f[N][N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i + n] = a[i];
    }
    for (int len = 3; len <= n + 1; len++) {          //枚举长度len [3,n+1]
        for (int l = 1; l + len - 1 <= 2 * n; l++) {  //枚举左端点
            int r = l + len - 1;  //根据长度和左端点确定右端点
            for (int k = l + 1; k < r; k++) {
                f[l][r] = max(f[l][r], f[l][k] + f[k][r] + a[l] * a[k] * a[r]);
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, f[i][i + n]);
    cout << ans;
    return 0;
}