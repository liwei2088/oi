#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 20005, M = 200005;
int n, m;
int h[N], e[M], ne[M], w[M], idx;
int color[N];

void add(int a, int b, int c) {
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

bool dfs(int u, int c, int mid) {
    color[u] = c;
    for (int i = h[u]; i!=-1; i = ne[i]) {
        if (w[i] <= mid) continue;
        int j = e[i];
        if (color[j]) {
            if (color[j] == color[u]) return false;
        } else if (!dfs(j, 3 - c, mid))
            return false;
    }
    return true;
}

bool check(int mid) {
    memset(color, 0, sizeof(color));
    for (int i = 1; i <= n; i++) {
        if (!color[i])
            if (!dfs(i, 1, mid)) return false;
    }
    return true;
}

int main() {
    scanf("%d%d", &n, &m);
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c), add(b, a, c);
    }
    int l = 0, r = 1e9;
    while (l < r) {
        int mid = (l + r) >> 1;
        cout << mid << endl;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    printf("%d\n", l);
    return 0;
}