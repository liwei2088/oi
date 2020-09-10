#include <algorithm>
#include <iostream>
using namespace std;
int n;
struct node {
    string name;
    int y, m, d;
    int xh;
} a[105];

bool cmp(node a, node b) {
    if (a.y < b.y) return true;
    if (a.y == b.y && a.m < b.m) return true;
    if (a.y == b.y && a.m == b.m && a.d < b.d) return true;
    if (a.y == b.y && a.m == b.m && a.d == b.d && a.xh > b.xh) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].name >> a[i].y >> a[i].m >> a[i].d;
        a[i].xh = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i].name << endl;
    return 0;
}