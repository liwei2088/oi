#include <iostream>
using namespace std;
int n, k, ans;
int x[20], y[20];
int q[2010];
bool st[2010];

int change(int t, int a, int b) {
    int p = t, mod = 1;
    while (p != 0) {
        if (p % 10 == a) {
            t = t - a * mod + b * mod;
            break;
        }
        p /= 10;
        mod *= 10;
    }
    return t;
}

void bfs(int u) {
    int f = 1, r = 1;
    q[r] = u;
    r++;
    st[u] = true;
    while (f < r) {
        int fx = q[f];
        f++;
        ans++;
        for (int i = 1; i <= k; i++) {
            int xx = change(fx, x[i], y[i]);
            if (!st[xx]) {
                st[xx] = true;
                q[r] = xx;
                r++;
            }
        }
    }
}

int main() {
    //freopen("test/data.in", "r", stdin);
    //freopen("test/data.out", "w", stdout);
    cin >> n;
    cin >> k;
    for (int i = 1; i <= k; i++) cin >> x[i] >> y[i];
    bfs(n);
    cout << ans;
    return 0;
}