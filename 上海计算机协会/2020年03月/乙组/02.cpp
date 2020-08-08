#include <iostream>
using namespace std;
const int N = 100005;
/*
 *  fd[i]表示b数组中的最大连续子序列和
 *  fu[i]表示 a 和 b 数组中的最大连续子序列和
 *  f[i]表示 a 和 b 数组中形状凸起的图形
 */
int n, a[N], b[N], fd[N], fu[N], f[N];
int main() {
    for (int i = 1; i <= n; i++) fd[i] = fu[i] = f[i] = -1e9;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) {
        fd[i] = max(fd[i - 1], 0) + b[i];
    }
    for (int i = 2; i <= n; i++) {
        fu[i] = max(fu[i - 1], fd[i - 1]) + a[i] + b[i];
    }
    int ans = -1e9;
    for (int i = 3; i <= n; i++) {
        f[i] = max(f[i - 1], fu[i - 1]) + b[i];
        ans = max(ans, f[i]);
    }
    cout << ans;
    return 0;
}