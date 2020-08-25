#include <iostream>
using namespace std;
int k, f[1005][1005];

bool ss(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    cin >> k;
    for (int i = 1; i <= 9; i++) f[1][i] = 1;
    for (int i = 2; i <= k; i++)
        for (int j = 0; j <= 9; j++)
            for (int n = 0; n <= 9; n++)
                if (ss(10 * n + j)) f[i][j] = (f[i][j] + f[i - 1][n]) % 10007;

    int ans = 0;
    for (int i = 0; i <= 9; i++) ans = (ans + f[k][i]) % 10007;
    cout << ans;
    return 0;
}