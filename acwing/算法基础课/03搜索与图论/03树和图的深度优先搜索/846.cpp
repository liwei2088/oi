#include <cstring>
#include <iostream>
using namespace std;
const int N = 100005;
int n, h[N], e[2 * N], ne[2 * N], idx;
bool vis[N];
int ans;

void add(int a, int b) {
    idx++;
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}

int dfs(int u) {
    vis[u] = true;
    int sum = 1, res = 0;
    for (int i = h[u]; i != -1; i = ne[i]) {
        int j = e[i];
        if (vis[j]) continue;
        int s = dfs(j);
        sum += s;
        res = max(res, s);
    }
    res = max(res, n - sum);
    ans = min(ans, res);
    return sum;
}

int main() {
    memset(h, -1, sizeof(h));
    cin >> n;
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        add(a, b), add(b, a);
    }
    ans = n;
    dfs(1);
    cout << ans << endl;
    return 0;
}