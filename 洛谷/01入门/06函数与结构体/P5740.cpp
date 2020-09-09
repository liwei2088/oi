#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    string name;
    int xh;
    int yw, sx, yy, zf;
} a[1005];

bool cmp(node x, node y) {
    if (x.zf > y.zf) return true;
    if (x.zf == y.zf && x.xh < y.xh) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].name >> a[i].yw >> a[i].sx >> a[i].yy;
        a[i].zf = a[i].yw + a[i].sx + a[i].yy;
        a[i].xh = i;
    }
    sort(a + 1, a + n + 1, cmp);
    cout << a[1].name << " " << a[1].yw << " " << a[1].sx << " " << a[1].yy;
    return 0;
}