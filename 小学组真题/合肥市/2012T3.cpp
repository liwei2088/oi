/**
 * 递归
 */

#include <iostream>
using namespace std;
int n, ans, a[205];

void dfs(int k, int s) {
    if (s < 0) return;
    if (s == 0) {
        if (k > 2) ans++;
        return;
    }
    for (int i = a[k - 1] + 1; i <= s; i++) {
        a[k] = i;
        dfs(k + 1, s - i);
        a[k] = 0;
    }
}

int main() {
    cin >> n;
    dfs(1, n);
    cout << ans;
    return 0;
}