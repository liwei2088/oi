#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
long long n, a[1000005], c[1000005];
int main() {
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    long long b = sum / n;  // b保存平均值
    //因为c[0]=a[1]-a[1]=0
    for (int i = 2; i <= n; i++) c[i] = c[i - 1] + a[i] - b;  //递归式
    nth_element(c + 1, c + n / 2 + 1, c + n + 1);
    long long ans = 0;
    for (int i = 1; i <= n; i++) ans += abs(c[i] - c[n / 2 + 1]);
    printf("%d", ans);
    return 0;
}