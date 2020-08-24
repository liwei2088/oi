/**
 * 单调性（双指针）+ 动态规划
 * 1.先排序 实现使数据单调递增，有利于双指针操作
 * 2.再从左到右求一个递增的最大数
 * 3.再从右向左求一个递减的最大数
 * 4.答案就是i,i-1分割的两个区域 求一个最大值
 */

#include <algorithm>
#include <iostream>
using namespace std;
int n, k, a[1000005], fl[1000005], fr[1000005];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int j = 1;
    for (int i = 1; i <= n; i++) {
        //当右侧加入一个新的a[i]时，要确保左侧的a[j]
        //在有效范围内，即a[i]-a[j]<=k 否则 j 要向右移动
        while (j < n && a[i] - a[j] > k) j++;
        //线性动态规划  f[i] 表示以i结尾的最大长度
        fl[i] = max(fl[i - 1], i - j + 1);
    }
    j = n;
    for (int i = n; i >= 1; i--) {
        while (j > 1 && a[j] - a[i] > k) j--;
        fr[i] = max(fr[i + 1], j - i + 1);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, fl[i] + fr[i + 1]);
    cout << ans;
    return 0;
}