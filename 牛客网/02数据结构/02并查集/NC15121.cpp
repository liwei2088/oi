#include <iostream>
using namespace std;
int n, m;
int p[55];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int x, y, px, py;
    while (cin >> n >> m) {
        for (int i = 1; i <= n; i++) p[i] = i;
        while (m--) {
            cin >> x >> y;
            if (x == n) continue;
            px = find(x), py = find(y);
            if (px != py) p[px] = py;
        }
        if (find(1) == find(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}