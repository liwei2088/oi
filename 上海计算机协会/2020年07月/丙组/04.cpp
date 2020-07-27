/**
 * https://iai.sh.cn/problem/86
 *
 * 倍数区间
 *
 */

#include <iostream>
using namespace std;
int n, k, a[200005];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i], a[i] += a[i - 1];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++)
            if ((a[j] - a[i - 1]) % k == 0) ans++;
    cout << ans;
    return 0;
}