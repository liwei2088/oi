#include <iostream>
using namespace std;
int n, a[2000005], b[2000005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) scanf("%d", &b[i]);
    int l = 1, r = 2, ans = 0;
    while (r <= n) {
        ans = max(ans, b[r] - a[l]);
        if (a[r] < a[l]) l = r;
        r++;
    }
    printf("%d", ans);
    return 0;
}