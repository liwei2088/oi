#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1000005;
int n, m;
int h[N], e[N], ne[N], idx, q[N], p[N], tt;
bool st[N];

void add(int a, int b) {
    e[++idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}

void dfs(int k) {
    st[k] = true;
    p[++tt] = k;
    for (int i = h[k]; i; i = ne[i]) {
        int j = e[i];
        if (!st[j]) {
            dfs(j);
        }
    }
}

void bfs(int x) {
    int hh = 0, tt = -1;
    q[++tt] = x;
    st[x] = true;
    while (hh <= tt) {
        int k = q[hh++];
        for (int i = h[k]; i; i = ne[i]) {
            int j = e[i];
            if (!st[j]) {
                q[++tt] = j;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }
    memset(st, 0, sizeof(st));
    dfs(1);
    for (int i = 1; i <= tt; i++) cout << p[tt] << " ";
    cout << endl;
    tt = 0;
    memset(st, 0, sizeof(st));
    bfs(1);
    for (int i = 1; i <= tt; i++) cout << q[tt] << " ";
    cout << endl;
    return 0;
}