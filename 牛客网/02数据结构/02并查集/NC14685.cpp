#include <iostream>
using namespace std;
int n, m;
int p[100005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int x, y, px, py;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i;
    while (m--) {
        cin >> x >> y;
        px = find(x), py = find(y);
        if (px != py) p[px] = py;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (p[i] == i) ans++;
    cout << ans - 1;
    return 0;
}