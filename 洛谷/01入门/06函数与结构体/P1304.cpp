#include <cstring>
#include <iostream>
using namespace std;

bool isprime[10005];
int primes[10005], pn;

void fastPrime(int n) {
    isprime[0] = isprime[1] = true;
    for (int i = 2; i <= n; i++) {
        if (!isprime[i]) primes[++pn] = i;
        for (int j = 1; j <= pn; j++) {
            if (i * primes[j] >= n) break;
            isprime[i * primes[j]] = true;
            if (i % primes[j] == 0) break;
        }
    }
}

int main() {
    int n;
    cin >> n;
    fastPrime(n);
    for (int i = 4; i <= n; i += 2) {
        for (int j = 1; j <= pn; j++) {
            if (isprime[i - primes[j]] == false) {
                cout << i << "=" << primes[j] << "+" << i - primes[j] << endl;
                break;
            }
        }
    }
    return 0;
}