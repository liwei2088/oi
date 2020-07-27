#include <iostream>
using namespace std;
long long n, a[100005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == 0) continue;
        a[i + 1] += a[i];
        ans += abs(a[i]);
    }
    cout << ans;
    return 0;
}