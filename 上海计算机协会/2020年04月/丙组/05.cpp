#include <algorithm>
#include <iostream>
using namespace std;
int n, a[1000005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] >= ans) ans++;
    cout << ans;
    return 0;
}