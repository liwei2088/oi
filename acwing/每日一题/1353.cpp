#include <cstdio>
#include <iostream>
using namespace std;
int n, a[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 1e9;
    for (int i = 1; i <= 100; i++) {
        int s = 0;
        for (int j = 1; j <= n; j++) {
            if (a[j] < i) {
                s += (i - a[j]) * (i - a[j]);
            } else if (i + 17 < a[j]) {
                s += (a[j] - i - 17) * (a[j] - i - 17);
            }
        }
        ans = min(ans, s);
    }
    cout << ans;
    return 0;
}