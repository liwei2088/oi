#include <iostream>
using namespace std;
int n, m;
int q[1005];

int find(int x) {
    if (q[x] != x) q[x] = find(q[x]);
    return q[x];
}

int main() {
    int x, y;
    while (cin >> n && n != 0) {
        int ans = 0;
        for (int i = 1; i <= n; i++) q[i] = i;
        cin >> m;
        for (int i = 1; i <= m; i++) {
            cin >> x >> y;
            q[find(x)] = find(y);
        }
        for (int i = 1; i <= n; i++)
            if (q[i] == i) ans++;
        cout << ans - 1 << endl;
    }
    return 0;
}