#include <iostream>
#include <queue>
using namespace std;
struct node {
    int t, stp;
} q[210];
int n, a, b, fl[210];
bool st[210];

int bfs(int k) {
    int f = 1, r = 1;
    q[r].t = k;
    q[r].stp = 0;
    r++;
    st[k] = true;
    while (f < r) {
        int x = q[f].t;
        int y = q[f].stp;
        f++;
        if (x == b) {
            return y;
        }
        int xx = x + fl[x];
        if (!st[xx] && xx >= 1 && xx <= n) {
            q[r].t = xx;
            q[r].stp = y + 1;
            r++;
            st[xx] = true;
        }
        xx = x - fl[x];
        if (!st[xx] && xx >= 1 && xx <= n) {
            q[r].t = xx;
            q[r].stp = y + 1;
            r++;
            st[xx] = true;
        }
    }
    return -1;
}

int main() {
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) cin >> fl[i];
    cout << bfs(a);
    return 0;
}