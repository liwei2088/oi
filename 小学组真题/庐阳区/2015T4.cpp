#include <iostream>
using namespace std;
int n, m, a[25], ans;
bool f[10005];

void dfs(int k, int s, int c) {
    if (k == n + 1) {
        if (c == m) {
            if (f[s] == false) {
                ans++;
                f[s] = true;
            }
        }
        return;
    }
    dfs(k + 1, s, c);
    dfs(k + 1, s + a[k], c + 1);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    dfs(1, 0, 0);
    cout << ans;
    return 0;
}