#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005, MOD = 10007;
int n, m, k, a, b;
int c[N][N];

int power(int a, int b) {
    a = a % MOD;
    int res = 1;
    while (b--) res = (res * a) % MOD;
    return res;
}

int main() {
    cin >> a >> b >> k >> n >> m;
    for (int i = 0; i <= k; i++)
        for (int j = 0; j <= i; j++)
            if (!j)
                c[i][j] = 1;
            else
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
    cout << c[k][n] * power(a, n) % MOD * power(b, m) % MOD;
    return 0;
}