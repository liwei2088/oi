#include <iostream>
using namespace std;
const int N = 205, M = 500005;
int n, m;
int b[N], a[N], f[M];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> b[i] >> a[i];
    for (int i = 1; i <= m; i++) {
        int t;
        cin >> t;
        for (int i = 1; i <= n; i++)
            for (int j = t; j >= b[i]; j--)
                for (int k = 1; k <= a[i]; k++)
                    if (j >= k * b[i]) {
                        f[j] = max()
                    }
    }
    return 0;
}