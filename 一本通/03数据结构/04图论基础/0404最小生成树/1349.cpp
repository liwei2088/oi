#include <cstring>
#include <iostream>
using namespace std;
const int INF = 0x3f3f3f3f;
int n, g[105][105], d[105];
bool st[105];

int prim() {
    int res = 0;
    memset(d, 0x3f, sizeof(d));
    d[1] = 0;
    for (int i = 1; i <= n; i++) {
        int t = 0;
        for (int j = 1; j <= n; j++)
            if (!st[j] && d[t] > d[j]) t = j;
        st[t] = true;
        res += d[t];
        for (int j = 1; j <= n; j++)
            if (!st[j]) d[j] = min(d[j], g[t][j]);
    }
    return res;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
            if (g[i][j] == 0) g[i][j] = INF;
        }
    int ans = prim();
    cout << ans;
    return 0;
}