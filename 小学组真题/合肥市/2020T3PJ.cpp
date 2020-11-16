#include <algorithm>
#include <iostream>
using namespace std;
int n, a[3000005], f[3000005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = i - 1; j >= 1; j--) {
            if (a[i] % a[j] == 0) {
                f[i] = f[j] + 1;
                break;
            }
        }
        ans = max(ans, f[i]);
    }
    printf("%d", ans);
    return 0;
}