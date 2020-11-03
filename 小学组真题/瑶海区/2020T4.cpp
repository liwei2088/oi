#include <algorithm>
#include <iostream>
using namespace std;
int n, a[1005];
bool f[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++) {
            int m = a[i] + a[j];
            bool k = binary_search(a + 1, a + n + 1, m);
            if (k == true && f[m] == false) {
                f[m] = true;
                ans++;
            }
        }
    cout << ans;
    return 0;
}