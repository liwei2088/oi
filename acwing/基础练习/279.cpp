#include <cstdio>
#include <iostream>
using namespace std;
int f[4005];
int main() {
    int n;
    cin >> n;
    f[0] = 1;
    for (int i = 1; i < n; i++)
        for (int j = i; j <= n; j++) f[j] = (f[j] + f[j - i]) % 2147483648;
    cout << f[n];
    return 0;
}