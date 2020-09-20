#include <iostream>
using namespace std;
int n, k, a[10005];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0, s = 0;
    int i = 1, j = 1;
    while (j <= n) {
        s += a[j];
        j++;
        if (j - i == k) {
            ans = max(ans, s);
            s -= a[i];
            i++;
        }
    }
    cout << ans;
    return 0;
}