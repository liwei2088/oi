/**
 * 统计前缀和出现的次数 总的数量就是累加
 * =（前缀和出现次数*(前缀和出现次数-1))/2
 */

#include <iostream>
using namespace std;
int n, a[1000005];
long long f[2000005];
int main() {
    cin >> n;
    f[1000000] = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
        f[a[i] + 1000000]++;
    }
    int ans = 0;
    for (int i = 0; i <= 2000000; i++)
        if (f[i] > 0) ans = (ans + f[i] * (f[i] - 1) / 2) % 2019;
    cout << ans;
    return 0;
}