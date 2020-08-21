/**
 *  根据题意可以得到当 i<j 且 a[i]>a[j] 时，
 *  会建立一条边，最大独立集就是最长的上身子序列
 */
#include <iostream>
using namespace std;
int n, a[1005], f[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i] > a[j]) f[i] = max(f[i], f[j] + 1);
        ans = max(ans, f[i]);
    }
    cout << ans;
    return 0;
}