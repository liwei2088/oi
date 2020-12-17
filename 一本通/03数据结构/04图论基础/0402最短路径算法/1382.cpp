#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 1000005;
int n, m;
int h[N], e[N], ne[N], w[N], d[N], idx;
bool st[N];
int q[N], r = 0, f = 1;

void add(int a, int b, int c) {
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

void spfa() {
    for (int i = 0; i <= n; i++) d[i] = 1e9;
    d[1] = 0;
    q[++r] = 1;
    st[1] = true;
    while (f <= r) {
        int t = q[f++];
        st[t] = false;
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if (d[j] > d[t] + w[i]) {
                d[j] = d[t] + w[i];
                if (!st[j]) {
                    q[++r] = j;
                    st[j] = true;
                }
            }
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
        add(b, a, c);
    }
    spfa();
    printf("%d\n", d[n]);
    return 0;
}