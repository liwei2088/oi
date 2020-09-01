#include <iostream>
using namespace std;

int main() {
    int n, m, t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int ans = 0;
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= n; j++)
                for (int k = 0; k <= n; k++)
                    if (i + j + k == n && i + j * 2 + k * 5 == m) ans++;
        cout << ans << endl;
    }
    return 0;
}