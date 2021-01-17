#include <cstdio>
#include <iostream>
using namespace std;
int n, p[1005], c[1005], g[1005][1005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) p[i] = i, c[i] = 1;
    for (int i = 1; i <= n; i++) {
        cin >> g[i][0];
        for (int j = 1; j <= g[i][0]; j++) cin >> g[i][j];
    }
    for (int i = n; i >= 1; i--) {  //注意一定要反向枚举 因为求最小序号
        for (int j = 1; j <= g[i][0]; j++) {
            int x = find(i), y = find(g[i][j]);
            if (x != y) {
                p[x] = y;
                int u = c[x];
                int v = c[y];
                c[x] += v;
                c[y] += u;
            }
        }
        for (int j = 1; j <= n; j++) {
            if (c[j] > n / 2) {
                cout << j << endl;
                return 0;
            }
        }
    }
    return 0;
}