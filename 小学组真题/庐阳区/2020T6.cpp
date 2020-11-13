#include <iostream>
using namespace std;
int n, a[1000005], f[1000005];
int main() {
    int x, m = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x]++;
        m = max(m, x);
    }
    for (int i = 1; i <= m; i++) f[i] = max(f[i - 1], f[i - 2] + i * a[i]);
    cout << f[m];
    return 0;
}