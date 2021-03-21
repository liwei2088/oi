#include <cstdio>
#include <iostream>
using namespace std;
const int N = 3000010;
int n, a[N], ans, b[N];

void dfs(int u, int v) {
    if (u == n + 1) {
        for (int i = 1; i < v; i++)
            for (int j = i + 1; j < v; j++)
                if (b[i] % b[j] && b[j] % b[i]) return;
        ans = max(ans, v - 1);
        return;
    }
    dfs(u + 1, v);
    b[v] = a[u];
    dfs(u + 1, v + 1);
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    dfs(1, 1);
    cout << ans;
    return 0;
}