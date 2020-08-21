#include <iostream>
using namespace std;
int n, a[1005], f[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    f[1] = a[1], f[2] = max(a[1], a[2]);
    for (int i = 3; i <= n; i++) f[i] = max(f[i - 1], f[i - 2] + a[i]);
    cout<<f[n];
    return 0;
}