#include <iostream>
using namespace std;
int m, n;
struct node {
    int x, p;
} q[100005];
int bfs(int k) {
    int f = 1, r = 1;
    q[r].x = k;
    q[r].p = 0;
    r++;
    while (f < r) {
        int fx = q[f].x;
        int fp = q[f].p;
        f++;
        if (fx == n) return fp;
        q[r].x = fx + 1;
        q[r].p = fp + 1;
        r++;
        q[r].x = fx - 1;
        q[r].p = fp + 1;
        r++;
        q[r].x = fx * 2;
        q[r].p = fp + 1;
        r++;
    }
}

int main() {
    cin >> m >> n;
    cout << bfs(m);
    return 0;
}