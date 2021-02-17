#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005, MOD = 1e9 + 7;
int c[N][N];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= i; j++)
            if (!j)
                c[i][j] = 1;
            else
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
    int ans = 0;
    for (int k = 2; k <= n - 2; k++)
        ans =
            (ans + (long long)c[n - 1][k] * (k - 1) % MOD * (n - k - 1) % MOD) %
            MOD;
    cout << ans;
    return 0;
}