#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, a[N], b[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += abs(a[i] - b[i]);
    }
    cout << ans;
    return 0;
}