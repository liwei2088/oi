#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
int n, k, a[N];
int main() {
    int ans = 0, idx;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) scanf("%d", &a[j]);
        sort(a + 1, a + n + 1);
        for (int j = 1; j <= n; j++) {
            idx = lower_bound(a + 1, a + n + 1, k - a[j]) - a;
            if (a[idx] + a[j] == k && idx != j) {
                ans++;
                break;
            }
        }
    }
    printf("%d", ans);
    return 0;
}