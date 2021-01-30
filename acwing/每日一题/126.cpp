#include <cstdio>
#include <iostream>
using namespace std;
const int N = 105;
int n, g[N][N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
            g[i][j] += g[i - 1][j];  //求列的前缀和
        }
    int ans = -1e9;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++) {
            int s = 0;
            for (int k = 1; k <= n; k++) {
                s = max(s, 0) + g[j][k] - g[i - 1][k];
                ans = max(ans, s);
            }
        }
    cout << ans;
    return 0;
}