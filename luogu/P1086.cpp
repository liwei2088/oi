#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int n, m, k, sx, sy, ans;

struct peanut {
    int x;
    int y;
    int v;
} a[410];

bool cmp(peanut x, peanut y) { return x.v > y.v; }

bool check(int t) {
    int dis;
    dis = abs(sx - a[t].x) + abs(sy - a[t].y) + a[t].x + 1;
    if (dis <= k) return true;
    return false;
}

int main() {
    int num = 0, t;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> t;
            if (t > 0) {
                num++;
                a[num].x = i;
                a[num].y = j;
                a[num].v = t;
            }
        }
    }
    sort(a + 1, a + num + 1, cmp);
    sx = 0, sy = a[1].y, ans = 0;
    for (int i = 1; i <= num; i++) {
        if (check(i)) {
            k -= abs(sx - a[i].x) + abs(sy - a[i].y) + 1;
            sx = a[i].x;
            sy = a[i].y;
            ans += a[i].v;
        } else
            break;
    }
    cout << ans;
    system("pause");
    return 0;
}