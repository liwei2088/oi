#include <cstdio>
#include <iostream>
using namespace std;
int n, h[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> h[i];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int l = i, r = i;
        while (l - 1 >= 1 && h[i] <= h[l - 1]) l--;
        while (r + 1 <= n && h[i] <= h[r + 1]) r++;
        ans = max(ans, (r - l + 1) * h[i]);
    }
    cout << ans;
    return 0;
}