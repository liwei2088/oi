#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, k, a[55];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    int m = a[k];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (m <= a[i]) ans++;
    cout << ans;
    return 0;
}