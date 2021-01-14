#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    int a, b, w;
} e[10005];
int n, m, p[105];
bool cmp(node x, node y) { return x.w < y.w; }
int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}
int main() {
    cin >> n >> m;
    int sum = 0;
    for (int i = 1; i <= m; i++) {
        cin >> e[i].a >> e[i].b >> e[i].w;
        sum += e[i].w;
    }
    sort(e + 1, e + m + 1, cmp);
    for (int i = 1; i <= n; i++) p[i] = i;
    int res = 0;
    for (int i = 1; i <= m; i++) {
        int x = find(e[i].a), y = find(e[i].b);
        if (x != y) {
            p[x] = y;
            res += e[i].w;
        }
    }
    cout << sum - res;
    return 0;
}