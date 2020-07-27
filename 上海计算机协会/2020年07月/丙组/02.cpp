/**
 * https://iai.sh.cn/problem/95
 *
 * 感应门
 *
 * 思路：区间合并  本题比较简单 因为区间已经排序 所以直接计算
 */

#include <iostream>
using namespace std;
int n, x, t[100005];
int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> t[i];

    int ans = 0, begin = t[1], end = t[1] + x;
    for (int i = 2; i <= n; i++) {
        if (end >= t[i])
            end = t[i] + x;
        else {
            ans += end - begin;
            begin = t[i], end = t[i] + x;
        }
    }
    ans += end - begin; 
    cout << ans;
    return 0;
}