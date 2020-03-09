#include <cstdio>
#include <iostream>
using namespace std;
int n, k, ans;
int x[20], y[20];
int q[10010];
bool st[10010];

void bfs(int u) {
    int f = 1, r = 1;
    q[r] = u;
    r++;
    st[u] = true;
    while (f < r) {
        int fx = q[f];
        f++;
        ans++;
        int t = fx;
        int m, mod = 1;
        while (t != 0) {
            m = t % 10;
            for (int i = 1; i <= k; i++) {
                if (m == x[i]) {
                    int xx = fx - x[i] * mod + y[i] * mod;
                    if (!st[xx]) {
                        st[xx] = true;
                        q[r++] = xx;
                    }
                }
            }
            t /= 10;
            mod *= 10;
        }
    }
}

int main() {
    cin >> n;
    cin >> k;
    for (int i = 1; i <= k; i++) cin >> x[i] >> y[i];
    bfs(n);
    cout << ans;
    return 0;
}