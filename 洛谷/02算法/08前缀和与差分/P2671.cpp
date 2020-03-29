#include <iostream>
using namespace std;
const int N = 100005, MOD = 10007;
int n, m;
// color和number数组保存颜色和数值
long long color[N], number[N];
// cnt和sum分别保存奇偶相同、颜色相同的数量与和
long long cnt[2][N], sum[2][N];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> number[i];
    for (int i = 1; i <= n; i++) {
        cin >> color[i];
        cnt[i % 2][color[i]]++;
        sum[i % 2][color[i]] = (sum[i % 2][color[i]] + number[i]) % MOD;
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        long long num = cnt[i % 2][color[i]];
        long long s = sum[i % 2][color[i]];
        //需要公示推到
        ans = (ans + i * (s + (num - 2) * number[i] % MOD)) % MOD;
    }
    cout << ans;
    return 0;
}