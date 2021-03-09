#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1010, M = 20010;
int n, m;
int h1[N], h2[N], e[M], ne[M], idx;
bool st1[N], st2[N];

void add(int h[], int a, int b) {
    idx++;
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}

void dfs(int h[], int u, bool st[]) {
    st[u] = true;
    for (int i = h[u]; i; i = ne[i]) {
        int j = e[i];
        if (!st[j]) dfs(h, j, st);
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        add(h1, a, b);
        add(h2, b, a);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        memset(st1, 0, sizeof(st1));
        memset(st2, 0, sizeof(st2));
        dfs(h1, i, st1);
        dfs(h2, i, st2);
        int cnt = 0;
        for (int j = 1; j <= n; j++)
            if (st1[j] || st2[j]) cnt++;
        if (cnt == n) ans++;
    }
    printf("%d", ans);
    return 0;
}