#include <cstring>
#include <iostream>
using namespace std;
int n, k, w[105], f[105][105];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> w[i];
    memset(f, -1, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < k; j++) {
            f[i][j] = f[i - 1][j];
            if (f[i - 1][((j - w[i]) % k + k) % k] != -1)
                f[i][j] =
                    max(f[i - 1][j], f[i - 1][((j - w[i]) % k + k) % k] + w[i]);
        }
    }
    if (f[n][0] == -1)
        cout << "0";
    else
        cout << f[n][0];
    return 0;
}