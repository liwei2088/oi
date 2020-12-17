#include <algorithm>
#include <iostream>
using namespace std;
int n, m, p[100005];
struct node {
    int a, b, w;
} edge[200005];

bool cmp(node x, node y) { return x.w < y.w; }

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        edge[i].a = a, edge[i].b = b, edge[i].w = w;
    }
    for (int i = 1; i <= n; i++) p[i] = i;
    sort(edge + 1, edge + m + 1, cmp);
    int res = 0, cnt = 0;
    for (int i = 1; i <= m; i++) {
        int x = find(edge[i].a), y = find(edge[i].b);
        if (x != y) {
            p[x] = y;
            cnt++;
            res += edge[i].w;
        }
    }
    if (cnt < n - 1)
        cout << "impossible";
    else
        cout << res;
    return 0;
}