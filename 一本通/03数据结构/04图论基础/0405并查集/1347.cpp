#include <cstdio>
#include <iostream>
using namespace std;
int n, m, a[205][205], p[40005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m;
    int k = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) a[i][j] = ++k;
    for (int i = 1; i <= n * n; i++) p[i] = i;
    for (int i = 1; i <= m; i++) {
        int x, y, u, v;
        char op;
        cin >> x >> y >> op;
        if (op == 'D') {
            u = find(a[x][y]), v = find(a[x + 1][y]);
        } else if (op == 'R') {
            u = find(a[x][y]), v = find(a[x][y + 1]);
        }
        if (u != v) {
            p[u] = v;
        } else {
            cout << i << endl;
            return 0;
        }
    }
    cout << "draw" << endl;
    return 0;
}