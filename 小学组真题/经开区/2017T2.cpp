#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    int xb, zl;
} a[1005];
int n, m;

bool cmp(node x, node y) { return x.zl > y.zl; }

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i].xb;
    for (int i = 1; i <= n; i++) cin >> a[i].zl;
    sort(a + 1, a + n + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= m; i++)
        if (a[i].xb == 0) ans++;
    cout << ans;
    return 0;
}