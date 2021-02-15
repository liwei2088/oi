#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
bool st[N];
int primes[N], cnt;

void isPrime() {
    st[0] = st[1] = true;
    for (int i = 2; i <= N; i++) {
        if (!st[i]) {
            primes[++cnt] = i;
            for (int j = 2 * i; j <= N; j += i) st[j] = true;
        }
    }
}

int main() {
    isPrime();
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    long long res = 0;
    for (int i = a; i <= b; i++)
        if (!st[i]) res += i;
    cout << res;
    return 0;
}