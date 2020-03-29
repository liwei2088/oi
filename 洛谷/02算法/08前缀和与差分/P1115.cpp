#include <iostream>
using namespace std;
const int N = 200005;
int n, a[N];
int main() {
    int t;
    cin >> n;
    int ans = -1e9;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        a[i] = t + a[i - 1];
        if (a[i] < 0) a[i] = t;
        ans = max(ans, a[i]);
    }
    cout << ans;
    return 0;
}