#include <cstdio>
#include <iostream>
using namespace std;
int n, m, t;
int p[1005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int x, y;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) p[i] = i;
        while (m--) {
            cin >> x >> y;
            int px = find(x), py = find(y);
            if (px != py) p[px] = py;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
            if (p[i] == i) ans++;
        cout << ans << endl;
        getchar();
    }
    return 0;
}