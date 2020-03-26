#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N];

bool cmp(int a, int b) { return a > b; }

int main() {
    int x, idx;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1, cmp);
    while (m--) {
        scanf("%d", &x);
        if (x < a[n]) {
            puts("-1");
            continue;
        }
        idx = lower_bound(a + 1, a + n + 1, x, cmp) - a;
        printf("%d\n", a[idx]);
    }
    return 0;
}