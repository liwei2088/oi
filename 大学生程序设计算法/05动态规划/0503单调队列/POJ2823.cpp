/**
 * POJ 2823 单调队列
 */
#include <cstdio>
#include <iostream>
using namespace std;
int n, k, a[1000005];
// q数组表示队列 r表示队尾 f表示队头
int q[1000005], r, f;
// pos记录每个入队元素的下标位置 mx保存最大值列表 mi保存最小值列表
int pos[1000005], mx[1000005], mi[1000005];
void getMax() {
    r = 0, f = 1;  //初始化队列
    for (int i = 1; i <= n; i++) {
        while (f <= r && q[r] <= a[i]) r--;  //检查单调队列是否是递增
        r++;
        q[r] = a[i];
        pos[r] = i;
        if (i < k) continue;             //前k个位置不需要设置最大值
        while (pos[f] < i - k + 1) f++;  //插件队头的位置是否已经出队
        mx[i - k + 1] = q[f];            //最后队头的元素就是最大值
    }
    for (int i = 1; i <= n - k + 1; i++)
        printf("%d%c", mx[i], i == n - k + 1 ? '\n' : ' ');
}

void getMin() {
    r = 0, f = 1;
    for (int i = 1; i <= n; i++) {
        while (f <= r && q[r] >= a[i]) r--;  //检查单调队列是否是递减
        r++;
        q[r] = a[i];
        pos[r] = i;
        if (i < k) continue;             //前k个位置不需要设置最小值
        while (pos[f] < i - k + 1) f++;  //插件队头的位置是否已经出队
        mi[i - k + 1] = q[f];            //最后队头的元素就是最小值
    }
    for (int i = 1; i <= n - k + 1; i++)
        printf("%d%c", mi[i], i == n - k + 1 ? '\n' : ' ');
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    getMin();
    getMax();
    return 0;
}