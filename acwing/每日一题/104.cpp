#include <algorithm>
#include <iostream>
using namespace std;
int n, a[100005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    nth_element(a + 1, a + n / 2 + 1, a + n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++) ans += abs(a[i] - a[n / 2 + 1]);
    cout << ans;
    return 0;
}