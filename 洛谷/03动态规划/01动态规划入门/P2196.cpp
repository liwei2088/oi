#include <iostream>
using namespace std;
int n, a[1005][1005], f[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++) cin >> a[i][j];
    for (int i = n; i >= 1; i--)
        for (int j = 1; j <= i; j++) f[j] = max(f[j], f[j + 1]) + a[i][j];
    cout << f[1];
    return 0;
}