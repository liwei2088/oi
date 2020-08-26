#include <iostream>
using namespace std;
int n, a[10005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int j = i + 1;
        while (j <= n && a[j - 1] + 1 == a[j]) j++;
        ans = max(ans, j - i);
        i = j - 1;
    }
    cout << ans;
    return 0;
}