#include <algorithm>
#include <iostream>
using namespace std;
int n, m;
int p[1005];
int ans = 0;
struct node {
    int x, y, t;
} q[100005];

bool cmp(node a, node b) { return a.t < b.t; }

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

/*
按时间sort一遍，每次合并两个节点，显然如果原先不连通那么合并之后联通块数量--
然后如果n==1就输出当前时间return
*/

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i;
    for (int i = 1; i <= m; i++) cin >> q[i].x >> q[i].y >> q[i].t;
    sort(q + 1, q + m + 1, cmp);
    for (int i = 1; i <= m; i++) {
        int px = find(q[i].x), py = find(q[i].y);
        if (px != py) {
            p[px] = py;
            n--;
            if (n == 1) {
                ans = i;
                break;
            }
        }
    }
    if (n == 1)
        cout << q[ans].t;
    else
        cout << "-1";
    return 0;
}