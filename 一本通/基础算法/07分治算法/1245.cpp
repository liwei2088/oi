#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, a[N];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    int m = unique(a + 1, a + n + 1) - (a + 1);
    for (int i = 1; i <= m; i++) printf("%d ", a[i]);
    return 0;
}