#include <iostream>
using namespace std;
int n, g[1005][1005], f[1005], c[1005];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> g[i][j];
    f[n] = 0;
    for (int i = n - 1; i >= 1; i--) {
        f[i] = 1e9;
        for (int j = i + 1; j <= n; j++)
            if (g[i][j] != 0 && f[i] > f[j] + g[i][j]) {
                f[i] = f[j] + g[i][j];
                c[i] = j;
            }
    }
    cout << "minlong=" << f[1] << endl;
    int x = 1;
    while (x != 0) {
        cout << x << " ";
        x = c[x];
    }
    return 0;
}