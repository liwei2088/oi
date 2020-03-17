#include <iostream>
using namespace std;
const int MOD = 9901;

int qmi(int a, int k) {
    a %= MOD;
    int res = 1;
    while (k) {
        if (k & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        k >>= 1;
    }
    return res;
}

int calc(int p, int k) {
    if (k == 0) return 1;
    if (k % 2 == 0) return (p % MOD * calc(p, k - 1) + 1) % MOD;
    return (1 + qmi(p, k / 2 + 1)) * calc(p, k / 2) % MOD;
}

int main() {
    int a, b;
    cin >> a >> b;
    int res = 1;
    for (int i = 2; i <= a; i++) {
        int s = 0;
        while (a % i == 0) {
            s++;
            a /= i;
        }
        if (s) res = res * calc(i, s * b) % MOD;
    }
    if (!a) res = 0;
    cout << res << endl;
    return 0;
}