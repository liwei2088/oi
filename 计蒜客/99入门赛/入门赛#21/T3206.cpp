#include <algorithm>
#include <iostream>
using namespace std;
int n, q;
struct node {
    int xh, df;
} a[105];

bool cmp(node x, node y) {
    if (x.df > y.df) return true;
    if (x.df == y.df && x.xh < y.xh) return true;
    return false;
}

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) a[i].xh = i, a[i].df = 0;
    while (q--) {
        int x, y, u, v;
        cin >> x >> y >> u >> v;
        if (u > v) {
            a[x].df += 3;
            a[y].df -= 2;
            if (a[y].df < 0) a[y].df = 0;
        } else if (u < v) {
            a[x].df -= 2;
            a[y].df += 3;
            if (a[x].df < 0) a[x].df = 0;
        }
    }
    sort(a + 1, a + n + 1, cmp);
    cout << a[1].xh;
    return 0;
}