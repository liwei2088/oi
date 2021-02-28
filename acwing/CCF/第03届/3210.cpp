#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005, M = 100005;
int n, m, p[N];
struct node {
    int a, b, c;
} e[N];

bool cmp(node x, node y) { return x.c < y.c; }

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) p[i] = i;
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        e[i] = {a, b, c};
    }
    sort(e + 1, e + m + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        int a = e[i].a, b = e[i].b, c = e[i].c;
        if (find(a) != find(b)) {
            ans += c;
            p[find(a)] = find(b);
        }
    }
    printf("%d\n", ans);
    return 0;
}