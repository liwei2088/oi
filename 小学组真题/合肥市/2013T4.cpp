/**
 * 做二进制优化，否则时间复杂度太大
 */

#include <iostream>
using namespace std;
int main() {
    int n;
    long long ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        double a;
        int t;
        cin >> a >> t;
        for (int j = 1; j <= t; j++) ans ^= (long long)(a * j);
    }
    cout << ans;
    return 0;
}