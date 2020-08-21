/**
 * HDU1003 求最大区间和，并输出区间的开始和结束位置
 * 注意：最后一行不需要间隔的回车
 */
#include <cstdio>
#include <iostream>
using namespace std;
int a[100005], f[100005];
int main() {
    
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++) {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
        int begin = 1, end = 1, ans = -1e9, pos = 1;
        for (int i = 1; i <= n; i++) {
            if (a[i] <= f[i - 1] + a[i])
                f[i] = f[i - 1] + a[i];
            else {
                f[i] = a[i];
                pos = i;
            }
            if (f[i] > ans) {
                begin = pos;
                end = i;
                ans = f[i];
            }
        }
        printf("Case %d:\n%d %d %d\n", k, ans, begin, end);
        if (k < t) printf("\n");  
    }
    return 0;
}