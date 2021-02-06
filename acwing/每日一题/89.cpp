#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    long long a, b, p;
    cin >> a >> b >> p;
    long long ans = 1 % p;
    while (b) {
        if (b & 1) ans = (ans * a) % p;
        a = (a * a) % p;
        b >>= 1;
    }
    cout << ans;
    return 0;
}