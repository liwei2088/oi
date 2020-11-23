#include <iostream>
using namespace std;
int g[25][25], n, a[25], q[25];
bool st[25];
int dfs(int k, int x) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (!g[x][i] && !st[i]) {
            st[i] = true;
            q[k + 1] = i;
            res = max(res, dfs(k + 1, i));
            q[k + 1] = 0;
            st[i] = false;
        }
    }
    return res + a[x];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i < n; i++)
        for (int j = n - i; j >= 1; j--) {
            cin >> g[i][j];
            g[j][i] = g[i][j];
        }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        q[1] = i;
        st[i] = true;
        ans = max(ans, dfs(1, i));
        st[i] = false;
        q[1] = 0;
    }
    cout << ans;
    return 0;
}