#include <iostream>
using namespace std;
int n, a[10005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i < n; i++)
        for (int j = 1; j <= n - i; j++)
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]), ans++;
    cout << ans;
    return 0;
}