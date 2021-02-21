#include <cstdio>
#include <iostream>
using namespace std;
const int N = 20005, M = 20005;
int n, m, ans;
int h[N], e[M], ne[M], idx;

void add(int a, int b) {
    idx++;
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}

int dfs(int u) {
    int d1 = 0, d2 = 0;
    for (int i = h[u]; i; i = ne[i]) {
        int j = e[i];
        int d = dfs(j);
        if (d >= d1)
            d2 = d1, d1 = d;
        else if (d > d2)
            d2 = d;
    }
    ans = max(ans, d1 + d2);
    return d1 + 1;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 2; i <= n; i++) {
        int p;
        scanf("%d", &p);
        add(p, i);
    }
    for (int i = 1; i <= m; i++) {
        int p;
        scanf("%d", &p);
        add(p, n + i);
    }
    dfs(1);
    printf("%d", ans);
    return 0;
}