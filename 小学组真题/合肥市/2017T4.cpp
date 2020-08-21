/**
 * 线性动态规划
 * f[i]=max(f[i-1],f[i-2]+a[i])
 * f[i] 表示小偷偷第i个房间的最大金额
 * 注意：由于需要f[i-1]和f[i-2]两个位置
 *      所以循环要从3开始，且前两个给出初值
 */
#include <iostream>
using namespace std;
int n, a[1005], f[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    f[1] = a[1], f[2] = max(a[1], a[2]);
    for (int i = 3; i <= n; i++) f[i] = max(f[i - 1], f[i - 2] + a[i]);
    cout << f[n];
    return 0;
}