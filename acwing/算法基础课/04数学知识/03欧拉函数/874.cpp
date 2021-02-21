#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1000005;
int n;
int primes[N], tt;
bool st[N];
int phi[N];

long long eulers(int x) {
    phi[1] = 1;
    st[0] = st[1] = true;
    for (int i = 2; i <= x; i++) {
        if (!st[i]) {
            primes[++tt] = i;
            phi[i] = i - 1;
        }
        for (int j = 1; primes[j] <= n / i; j++) {
            st[primes[j] * i] = true;
            if (i % primes[j] == 0) {
                phi[primes[j] * i] = phi[i] * primes[j];
                break;
            }
            phi[primes[j] * i] = phi[i] * (primes[j] - 1);
        }
    }
    long long res = 0;
    for (int i = 1; i <= n; i++) res += phi[i];
    return res;
}

int main() {
    cin >> n;
    cout << eulers(n);
    return 0;
}