#include <iostream>
using namespace std;
int n, m;
int p[10005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int t, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i;
    while (m--) {
        cin >> t >> x >> y;
        if (t == 1) {
            p[find(x)] = find(y);
        } else {
            if (find(x) == find(y))
                cout << "Y" << endl;
            else
                cout << "N" << endl;
        }
    }
    return 0;
}