/**
 * 题目实质是求斐波那契数列数列的和
 * 
 */

#include <iostream>
using namespace std;
const int MOD = 1e9 + 9;
int f[100005];
int main() {
    int n;
    cin >> n;
    f[1] = 2, f[2] = 1, f[3] = 2;
    int ans = 0;
    for (int i = 4; i <= n; i++) f[i] = (f[i - 1] + f[i - 2]) % MOD;
    for (int i = 1; i <= n; i++) ans = (ans + f[i]) % MOD;
    cout << ans;
    return 0;
}