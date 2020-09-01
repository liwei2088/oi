#include <iostream>
using namespace std;
int n, m;
struct node {
    long long no, x, y, st;
} q[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> q[i].x >> q[i].y;
        q[i].no = i;
        q[i].st = 0;
    }
    cin >> m;
    long long ans = 0;
    while (m--) {
        int a, b;
        cin >> a >> b;
        long long mi = 1e18;
        int k = 0;
        for (int i = 1; i <= n; i++)
            if (q[i].st == 0) {
                long long dis =
                    (a - q[i].x) * (a - q[i].x) + (b - q[i].y) * (b - q[i].y);
                if (dis < mi) {
                    mi = dis;
                    k = i;
                }
            }
        q[k].st = 1;
        ans += mi;
    }
    cout << ans;
    return 0;
}