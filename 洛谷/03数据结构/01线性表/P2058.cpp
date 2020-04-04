#include <iostream>
using namespace std;
const int N = 3e5 + 5, M = 1e5 + 5;
struct node {
    int ti;
    int xi;
} q[N];
int n, c[M], ans;
int main() {
    int f = 1, r = 1, t, k, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t >> k;
        for (int j = 1; j <= k; j++) {
            cin >> x;
            if (c[x]++ == 0) ans++;
            q[r].ti = t, q[r].xi = x, r++;
        }
        while (t - q[f].ti >= 86400) {
            if (--c[q[f].xi] == 0) ans--;
            f++;
        }
        cout << ans << endl;
    }
    return 0;
}