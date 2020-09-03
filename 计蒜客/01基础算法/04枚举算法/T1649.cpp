#include <iostream>
using namespace std;
int n, a[1005][1005], col[1005], row[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) row[i] += a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) col[i] += a[j][i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 0) ans = max(ans, row[i] + col[j]);
    cout << ans;
    return 0;
}