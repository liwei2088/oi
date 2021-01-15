#include <cstdio>
#include <iostream>
using namespace std;
int n, m, q, p[20005];

int read() {
    int s = 0, w = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') w = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') s = s * 10 + ch - '0', ch = getchar();
    return s * w;
}

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int a, b;
    n = read(), m = read();
    for (int i = 1; i <= n; i++) p[i] = i;
    for (int i = 1; i <= m; i++) {
        a = read(), b = read();
        int x = find(a), y = find(b);
        if (x != y) p[x] = y;
    }
    for (int i = 1; i <= n; i++) p[i] = find(i);
    q = read();
    while (q--) {
        a = read(), b = read();
        if (p[a] == p[b])
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}