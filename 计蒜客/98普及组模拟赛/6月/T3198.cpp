#include <algorithm>
#include <iostream>
using namespace std;
const int N = 5;
int n, m, t;
long long ans = 0;

struct node {
    int x, y;
    long long w;
} q[N];

bool st[N][N];
int a[N];

void dfs(int k) {
    if (k == m + 1) {
        for (int i = 1; i <= m; i++) cout << a[i] << " ";
        cout << s << endl;
        ans = max(ans, s);
        return;
    }
    int x = q[k].x, y = q[k].y;
    st[x][y] = true;
    a[k] = 1;
    dfs(k + 1);
    st[x][y] = false;
    a[k] = 0;
    dfs(k + 1);
}

int main() {
    cin >> n >> m >> t;
    for (int i = 1; i <= m; i++) cin >> q[i].x >> q[i].y >> q[i].w;
    dfs(1);
    cout << ans;
    return 0;
}