#include <cstdio>
#include <iostream>
using namespace std;
long long a[100005], cnt[100005];
int n, k;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];  //处理前缀和
    }
    long long ans = 0;
    // 初始化很重要， 因为考虑[l,r]
    // 当 l=1 a[l,r] = a[r]-a[0] 所以a[0]也是需要考虑
    // 即 0%k ==0  所以a[0] 需要加入到 cnt[0]中
    cnt[0] = 1;
    for (int i = 1; i <= n; i++) {
        // 需要计算前面所有同余的个数之和，求组合数
        // 相当于C(2,n) 等于前n-1累加
        ans += cnt[a[i] % k];
        cnt[a[i] % k]++;
    }
    cout << ans;
    return 0;
}