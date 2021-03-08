#include <cstdio>
#include <iostream>
using namespace std;
int n, k, a[1010];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0, s = 0;
    for (int i = 1; i <= n; i++) {
        s += a[i];
        if (s >= k) ans++, s = 0;
    }
    if (s != 0) ans++;
    cout << ans;
    return 0;
}