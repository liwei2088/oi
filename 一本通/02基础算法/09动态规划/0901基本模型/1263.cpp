#include <algorithm>
#include <iostream>
using namespace std;
int n;
pair<int, int> a[5005];
int f[5005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].first >> a[i].second;
    sort(a + 1, a + n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i].second > a[j].second) f[i] = max(f[i], f[j] + 1);
        ans = max(ans, f[i]);
    }
    cout << ans;
    return 0;
}