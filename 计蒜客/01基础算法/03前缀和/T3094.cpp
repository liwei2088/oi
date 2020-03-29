#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N], mx[N], mi[N];

int main() {
    int t;
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        mx[i] = i == 1 ? a[i] : max(mx[i - 1], a[i]);
        mi[i] = i == 1 ? a[i] : min(mi[i - 1], a[i]);
    }
    while (m--) {
        scanf("%d", &t);
        printf("%d ", mx[t] - mi[t]);
    }
    return 0;
}