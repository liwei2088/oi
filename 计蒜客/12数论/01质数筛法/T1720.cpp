#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
bool st[N];
int primes[N], cnt;

void isPrime() {
    primes[0] = primes[1] = true;
    for (int i = 2; i <= N; i++) {
        if (!st[i]) {
            primes[++cnt] = i;
            for (int j = 2 * i; j <= N; j += i) st[j] = true;
        }
    }
}

int main() {
    isPrime();
    int n;
    cin >> n;
    for (int i = 1; i <= cnt; i++)
        for (int j = i; j <= cnt; j++) {
            int a = primes[i], b = primes[j];
            int c = n - a - b;
            if (c >= b !st[c]) {
                cout << a << " " << b << " " << c << endl;
                return 0;
            }
        }
    return 0;
}