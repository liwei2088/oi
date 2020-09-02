/**
 * 其实就是看羊群是否可以分为 (x-k)/2 (x+k)/2
 */

#include <iostream>
using namespace std;

int dfs(int n, int k) {
    if (n <= k) return 1;
    if ((n - k) % 2 == 0) return dfs((n - k) / 2, k) + dfs((n + k) / 2, k);
    return 1;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << dfs(n, k);
    return 0;
}