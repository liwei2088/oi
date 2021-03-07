#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
int n, a[N], x;
int main() {
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += a[i];
    }
    cin >> x;
    for (int i = n; i > x; i--) {
        ans += a[i];
    }
    cout << ans;
    return 0;
}