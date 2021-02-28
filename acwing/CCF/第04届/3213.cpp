#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
struct node {
    int v, c;
} b[N];
int n, s[N];

bool cmp(node x, node y) {
    if (x.c != y.c) return x.c > y.c;
    if (x.c == y.c && x.v != y.v) return x.v < y.v;
    return false;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        s[x]++;
    }
    n = 0;
    for (int i = 0; i <= 1000; i++)
        if (s[i] != 0) b[++n] = {i, s[i]};
    sort(b + 1, b + n + 1, cmp);
    for (int i = 1; i <= n; i++) printf("%d %d\n", b[i].v, b[i].c);
    return 0;
}