#include <algorithm>
#include <iostream>
using namespace std;
int n, k;
struct node {
    int w, v;
    double p;
} a[1005];

bool cmp(node x, node y) { return x.p > y.p; }

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i].w;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].v;
        a[i].p = a[i].v * 1.0 / a[i].w;
    }
    sort(a + 1, a + n + 1, cmp);
    double ans = 0;
    for (int i = 1; i <= n; i++) {
        if (k >= a[i].w) {
            k -= a[i].w;
            ans += a[i].v;
        } else {
            ans += a[i].v * 1.0 / a[i].w * k;
            break;
        }
    }
    printf("%.2lf", ans);
    return 0;
}