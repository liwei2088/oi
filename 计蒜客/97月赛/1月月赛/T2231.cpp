#include <algorithm>
#include <iostream>
using namespace std;
int n, m;
int a[1000005];
struct node {
    int r, v;
} b[1000005];

bool cmp(node x, node y) { return x.v > y.v; }

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i].r >> b[i].v;
    sort(b + 1, b + m + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i] > b[j].r) {
                ans += b[j].v;
                break;
            }
    cout << ans;
    return 0;
}