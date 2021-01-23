#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 1005, INF = 0x3f3f3f3f;
int n, m;
int h[N], e[N], ne[N], w[N], d[N], idx;
bool st[N];
queue<int> q;

void add(int a, int b, int c) {
    e[++idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx;
}

void spfa(int u) {
    memset(d, 0x3f, sizeof(d));
    memset(st, 0, sizeof(st));
    while (q.size()) q.pop();
    d[u] = 0;
    st[u] = true;
    q.push(u);
    while (q.size()) {
        int v = q.front();
        q.pop();
        st[v] = false;
        for (int i = h[v]; i; i = ne[i]) {
            int j = e[i];
            if (d[j] > d[v] + w[i]) {
                d[j] = d[v] + w[i];
                if (!st[j]) {
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }
}

int main() {
    while (cin >> n >> m) {
        memset(h, 0, sizeof(h));
        idx = 0;
        for (int i = 1; i <= m; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            add(a, b, c), add(b, a, c);
        }
        int x, y;
        cin >> x >> y;
        spfa(x);
        if (d[y] == INF)
            cout << "-1" << endl;
        else
            cout << d[y] << endl;
    }
    return 0;
}