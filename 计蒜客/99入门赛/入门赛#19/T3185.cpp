#include <iostream>
using namespace std;
const int N = 100005;
int a[N], q[N], n;
/*
 最大子序列和 动态规划
*/
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int k = n / 2;
    for (int i = 1; i <= k; i++) q[i] = a[i] + a[n - i + 1];
    int res = 0, s = 0;
    for (int i = 1; i <= k; i++) {
        if (q[i] + s > q[i])
            s += q[i];
        else
            s = q[i];
        if (s > res) res = s;
    }
    cout << res;
    return 0;
}