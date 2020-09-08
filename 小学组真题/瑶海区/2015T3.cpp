#include <cmath>
#include <iostream>
using namespace std;
int n, m, f[10005];
struct node {
    int t, x, y;
} a[10005];

int dis(int u, int v) { return abs(a[u].x - a[v].x) + abs(a[u].y - a[v].y); }

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) cin >> a[i].t >> a[i].x >> a[i].y;
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        f[i] = 1;
        for (int j = 1; j < i; j++) {
            if (dis(i, j) <= a[i].t - a[j].t) f[i] = max(f[i], f[j] + 1);
        }
        ans = max(ans, f[i]);
    }
    cout << ans;
    return 0;
}