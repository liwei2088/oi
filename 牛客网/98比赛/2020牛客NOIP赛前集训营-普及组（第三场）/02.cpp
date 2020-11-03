#include <algorithm>
#include <iostream>
using namespace std;
int n, f[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) f[__gcd(i, j)]++;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int k = 1; k <= n; k++) ans += f[i] * __gcd(i, k);
    cout << ans;
    return 0;
}