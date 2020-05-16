#include <iostream>
using namespace std;
int n, m, q;
int p[1005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int x, y;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++) p[i] = i;
    while (m--) {
        cin >> x >> y;
        p[find(x)] = find(y);
    }
    while (q--) {
        cin >> x >> y;
        if (find(x) == find(y))
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}