#include <iostream>
using namespace std;
int n;

bool isprime[100005];
int primes[100005], pn;

void fastprime(int n) {
    isprime[0] = isprime[1] = true;
    for (int i = 2; i <= n; i++) {
        if (isprime[i] == false) primes[++pn] = i;
        for (int j = 1; primes[j] <= n / i; j++) {
            isprime[i * primes[j]] = true;
            if (i % primes[j] == 0) break;
        }
    }
}

int main() {
    cin >> n;
    fastprime(n);
    for (int i = 1; primes[i] <= n && i <= pn; i++) {
        int t = n, c = 0;
        while (t) {
            c += t / primes[i];
            t /= primes[i];
        }
        cout << primes[i] << " " << c << endl;
    }
    return 0;
}