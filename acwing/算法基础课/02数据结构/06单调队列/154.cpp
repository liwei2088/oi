#include <iostream>
#include <cstdio>
using namespace std;
const int N = 1000005;
// q队列是一个单调递增的序列 存储的是原数组元素的下标序号
int n, k, a[N], q[N];
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int f = 1, r = 1;
    for (int i = 1; i <= n; i++) {
        // a[i]元素入队，入队需要确保是单调递增
        //所以需要检查队尾元素是否<a[i] 如果不满足从队尾出队
        while (f < r && a[q[r - 1]] >= a[i]) {
            r--;
        }
        q[r++] = i;  //新元素的下标入队
        //检查窗口大小是否满足条件
        //队列头存储的最远处的数据下标 要确保最远处的下标与i之间的距离
        while (f < r && i - q[f] + 1 > k) f++;
        //前k-1个元素不输出数据
        if (i >= k) printf("%d ", a[q[f]]);
    }
    puts("");
    f = 1, r = 1;
    for (int i = 1; i <= n; i++) {
        // a[i]元素入队，入队需要确保是单调递增
        //所以需要检查队尾元素是否<a[i] 如果不满足从队尾出队
        while (f < r && a[q[r - 1]] <= a[i]) {
            r--;
        }
        q[r++] = i;  //新元素的下标入队
        //检查窗口大小是否满足条件
        //队列头存储的最远处的数据下标 要确保最远处的下标与i之间的距离
        while (f < r && i - q[f] + 1 > k) f++;
        //前k-1个元素不输出数据
        if (i >= k) printf("%d ", a[q[f]]);
    }
}