#include <iostream>
using namespace std;
int n, m, w;
int p[10005], c[10005], d[10005], f[10005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m >> w;
    for (int i = 1; i <= n; i++) {
        cin >> c[i] >> d[i];
        p[i] = i;
    }

    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        int u = find(x), v = find(y);
        if (u != v) {
            p[u] = v;
            c[v] += c[u];
            d[v] += d[u];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (p[i] == i) {
            for (int j = w; j >= c[i]; j--) {
                f[j] = max(f[j], f[j - c[i]] + d[i]);
            }
        }
    }
    cout << f[w] << endl;
    return 0;
}