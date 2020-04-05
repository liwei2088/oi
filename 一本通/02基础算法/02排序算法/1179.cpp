#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    int xh, yw, sx, yy, zf;
} a[301];
int n;

bool cmp(node x, node y) {
    if (x.zf == y.zf && x.yw == y.yw) return x.xh < y.xh;
    if (x.zf == y.zf) return x.yw > y.yw;
    return x.zf > y.zf;
}

int main() {
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