#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
struct node {
    int no, x, y;
    long long lx, rx, ly, ry;
} a[N];
int n;

bool cmp1(node a, node b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

bool cmp2(node a, node b) {
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
}

bool cmp3(node a, node b) { return a.no < b.no; }

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &a[i].x, &a[i].y);
        a[i].no = i;
    }
    sort(a + 1, a + n + 1, cmp1);
    for (int i = 1; i <= n; i++)
        a[i].lx = a[i - 1].lx + (i - 1) * (a[i].x - a[i - 1].x);
    for (int i = n; i >= 1; i--)
        a[i].rx = a[i + 1].rx + (n - i) * (a[i + 1].x - a[i].x);
    sort(a + 1, a + n + 1, cmp2);
    for (int i = 1; i <= n; i++)
        a[i].ly = a[i - 1].ly + (i - 1) * (a[i].y - a[i - 1].y);
    for (int i = n; i >= 1; i--)
        a[i].ry = a[i + 1].ry + (n - i) * (a[i + 1].y - a[i].y);
    int ans = 0;
    long long mi = 1e18;
    sort(a + 1, a + n + 1, cmp3);
    for (int i = 1; i <= n; i++) {
        if (a[i].lx + a[i].rx + a[i].ly + a[i].ry < mi) {
            mi = a[i].lx + a[i].rx + a[i].ly + a[i].ry;
            ans = a[i].no;
        }
    }
    cout << ans;
    return 0;
}