#include <cstdio>
#include <iostream>
using namespace std;
int n, a[100005], s[100005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        s[i] += a[i];
    }
    long long ans = 1e18;
    for (int i = 1; i <= n; i++)
        ans = min(ans, );
    cout << ans;
    return 0;
}