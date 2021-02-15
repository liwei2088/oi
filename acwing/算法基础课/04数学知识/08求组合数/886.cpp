#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005, MOD = 1e9 + 7;
long long fact[N], infact[N];

long long qmi(int a, int b) {
    long long res = 1;
    a %= MOD;
    while (b) {
        if (b & 1) res = (res * 1ll * a) % MOD;
        a = (a * 1ll * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    fact[0] = infact[0] = 1;
    for (int i = 1; i <= N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
        infact[i] = infact[i - 1] * qmi(i, MOD - 2) % MOD;
    }
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b;
        scanf("%d%d", &a, &b);
        cout << fact[a] * infact[b] % MOD * infact[a - b] % MOD << endl;
    }
    return 0;
}