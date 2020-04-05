#include <iostream>
using namespace std;
const int N = 1005, MOD = 12345;
int f[N][2], n;
int main() {
    cin >> n;
    f[1][0] = 8;
    f[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i][0] = (f[i - 1][0] * 9 + f[i - 1][1]) % MOD;
        f[i][1] = (f[i - 1][0] + f[i - 1][1] * 9) % MOD;
    }
    cout << f[n][0];
    return 0;
}