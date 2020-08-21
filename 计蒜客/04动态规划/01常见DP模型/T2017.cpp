/**
 * 题目要求形成一个波浪形的数列，也就是所谓的最长抖动序列。
 * 2 1 2 0 3 2 6 或者  1 2 1 6 2 ..
 */ 

#include <iostream>
using namespace std;
// up[i]表示以i结尾的最终以上升结尾的序列长度
// down[i]表示以i结尾的最终以下降结尾的序列长度
int n, a[100005], up[100005], down[100005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    //第1个即可以作为上升结尾也可以作为下降结尾且长度都是1
    up[1] = 1, down[1] = 1;
    for (int i = 2; i <= n; i++) {
        //如果满足上升，则前一个节点是必须是下降结尾 长度+1
        //转移方程为：up[i] = down[i - 1] + 1
        //则节点不能作为下降的末尾节点，只能舍弃，则长度等于前一个节点的下降长度
        //转移方程为：down[i] = down[i - 1]
        if (a[i] > a[i - 1]) up[i] = down[i - 1] + 1, down[i] = down[i - 1];
        //原理同上
        if (a[i] < a[i - 1]) down[i] = up[i - 1] + 1, up[i] = up[i - 1];
        //如果相等则都不能作为末端点，只能继承上一个节点的状态
        if (a[i] == a[i - 1]) up[i] = up[i - 1], down[i] = down[i - 1];
    }
    cout << max(up[n], down[n]);
    return 0;
}