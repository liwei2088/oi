/**
 * 01背包的模板题
 */
#include <iostream>
using namespace std;
int a, n, e[1005], w[1005], f[1005];
int main() {
    cin >> a >> n;
    for (int i = 1; i <= n; i++) cin >> e[i];
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = a; j >= e[i]; j--) f[j] = max(f[j], f[j - e[i]] + w[i]);
    cout << f[a];
    return 0;
}