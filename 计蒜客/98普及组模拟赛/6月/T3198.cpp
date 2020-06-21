#include <iostream>
using namespace std;
const int N = 15;
int n, m;
long long v, ans = 0;
struct node {
    int x, y;
    long long w;
} q[N];
bool st[N][N];
void dfs(int k, long long sum) {
    if (k == n + 1) {
        cout << sum << endl;
        ans = max(ans, sum);
        return;
    }
    st[q[k].x][q[k].y] = false;
    dfs(k + 1, sum);

    st[q[k].x][q[k].y] = true;
    if (st[q[k].x - 1][q[k].y] || st[q[k].x + 1][q[k].y] ||
        st[q[k].x][q[k].y - 1] || st[q[k].x][q[k].y + 1])
        sum += q[k].w;
    else
        sum += q[k].w - v;
    dfs(k + 1, sum);
}

int main() {
    cin >> n >> m >> v;
    for (int i = 1; i <= n; i++) cin >> q[i].x >> q[i].y >> q[i].w;
    dfs(0, 0);
    cout << ans;
    return 0;
}