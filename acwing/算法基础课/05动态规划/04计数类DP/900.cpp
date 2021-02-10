#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1e3 + 5, mod = 1e9 + 7;
int n, f[N];
int main() {
    cin >> n;
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++) f[j] = (f[j] + f[j - i]) % mod;
    cout << f[n];
    return 0;
}