#include <cstdio>
#include <iostream>
using namespace std;
int n, m, p[100005], t[100005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) p[i] = i, t[i] = 1;
    while (m--) {
        char c;
        int a, b;
        scanf(" %c", &c);
        if (c == 'M') {
            scanf("%d%d", &a, &b);
            int x = find(a), y = find(b);
            if (x != y) {
                p[y] = x;
                t[x] += t[y];
            }
        } else if (c == 'Q') {
            scanf("%d", &a);
            int x = find(a);
            printf("%d\n", t[x]);
        }
    }
    return 0;
}