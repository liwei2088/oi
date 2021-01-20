#include <cstdio>
#include <iostream>
using namespace std;
int n, m, p[50005], d[50005];

int find(int x) {
    if (p[x] != x) {
        int u = find(p[x]);
        d[x] += d[p[x]];
        p[x] = u;
    }
    return p[x];
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) p[i] = i;
    int ans = 0;
    while (m--) {
        int t, x, y;
        scanf("%d%d%d", &t, &x, &y);
        if (x > n || y > n) {
            ans++;
            continue;
        }
        int px = find(x), py = find(y);
        if (t == 1) {
            if (px == py && (d[x] - d[y]) % 3) {
                ans++;
            } else if (px != py) {
                p[px] = py;
                d[px] = d[y] - d[x];
            }
        } else {
            if (px == py && (d[x] - d[y] - 1) % 3) {
                ans++;
            } else if (px != py) {
                p[px] = py;
                d[px] = d[y] + 1 - d[x];
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}