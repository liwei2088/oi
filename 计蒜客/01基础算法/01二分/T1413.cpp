#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1000005;
int n, m, a[N];
int main() {
    int x;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    n = unique(a + 1, a + n + 1) - (a + 1);
    while (m--) {
        scanf("%d", &x);
        if (binary_search(a + 1, a + n + 1, x))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}