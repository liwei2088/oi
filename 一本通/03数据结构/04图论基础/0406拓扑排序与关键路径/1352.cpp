#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 20005;
int n, m;
int h[N], e[N], ne[N], idx;
int d[N], q[N], f[N];

void add(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

bool topsort() {
    int hh = 0, tt = -1;
    for (int i = 1; i <= n; i++)
        if (!d[i]) {
            q[++tt] = i;
            f[i] = 100;
        }
    while (hh <= tt) {
        int t = q[hh++];
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            f[j] = f[t] + 1;
            d[j]--;
            if (!d[j]) q[++tt] = j;
        }
    }
    return tt == n - 1;
}

int main() {
    scanf("%d%d", &n, &m);
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        add(b, a);
        d[a]++;
    }
    if (!topsort())
        puts("Poor Xed");
    else {
        int ans = 0;
        for (int i = 1; i <= n; i++) ans += f[i];
        printf("%d\n", ans);
    }
    return 0;
}