#include <iostream>
using namespace std;
int n, m;
int p[50005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int x, y, cnt = 1;
    while (cin >> n >> m && n != 0 && m != 0) {
        for (int i = 1; i <= n; i++) p[i] = i;
        while (m--) {
            cin >> x >> y;
            p[find(x)] = find(y);
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
            if (p[i] == i) ans++;
        cout << "Case " << cnt << ": " << ans << endl;
        cnt++;
    }
    return 0;
}