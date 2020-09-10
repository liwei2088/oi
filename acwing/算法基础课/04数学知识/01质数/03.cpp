#include <iostream>
using namespace std;
bool isprime[1000005];
int primes[1000005], pn;

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
    int x;
    cin >> x;
    fastprime(x);
    cout << pn << endl;
    return 0;
}