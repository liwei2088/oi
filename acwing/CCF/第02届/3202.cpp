#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
int n, a[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int ans = 0;
    for (int i = 1; i < n; i++)
        if (a[i + 1] - a[i] == 1) ans++;
    cout << ans;
    return 0;
}