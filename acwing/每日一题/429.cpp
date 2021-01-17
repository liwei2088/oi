#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    int xh, yw, sx, yy, zf;
} a[305];

bool cmp(node x, node y) {
    if (x.zf > y.zf) return true;
    if (x.zf == y.zf && x.yw > y.yw) return true;
    if (x.zf == y.zf && x.yw == y.yw && x.xh < y.xh) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].yw >> a[i].sx >> a[i].yy;
        a[i].xh = i;
        a[i].zf = a[i].yw + a[i].sx + a[i].yy;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= 5; i++) cout << a[i].xh << " " << a[i].zf << endl;
    return 0;
}