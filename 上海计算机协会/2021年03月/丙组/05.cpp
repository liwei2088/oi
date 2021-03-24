#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, d, x[100005];
int main() {
    scanf("%d%d", &n, &d);
    for (int i = 1; i <= n; i++) scanf("%d", &x[i]);
    sort(x + 1, x + n + 1);
    int t = x[1] + d, ans = 1;
    for (int i = 2; i <= n; i++) {
        if (x[i] > t) {
            ans++;
            t = x[i] + d;
        }
    }
    printf("%d\n", ans);
    return 0;
}