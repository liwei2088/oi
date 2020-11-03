#include <iostream>
using namespace std;
struct node {
    int x;
    int stp;
} q[100005];
int n, k;
bool st[100005];
int bfs(int x) {
    int f = 1, r = 1;
    st[x] = true;
    q[r].x = x;
    q[r].stp = 0;
    r++;
    while (f < r) {
        int fx = q[f].x;
        int fstp = q[f].stp;
        f++;
        if (fx == k) return fstp;
        int xx;
        xx = fx + 1;
        if (xx >= 0 && xx <= 100000 && !st[xx]) {
            q[r].x = xx;
            q[r].stp = fstp + 1;
            r++;
        }
        xx = fx - 1;
        if (xx >= 0 && xx <= 100000 && !st[xx]) {
            q[r].x = xx;
            q[r].stp = fstp + 1;
            r++;
        }
        xx = fx * 2;
        if (xx >= 0 && xx <= 100000 && !st[xx]) {
            q[r].x = xx;
            q[r].stp = fstp + 1;
            r++;
        }
    }
}

int main() {
    cin >> n >> k;
    cout << bfs(n);
    return 0;
}