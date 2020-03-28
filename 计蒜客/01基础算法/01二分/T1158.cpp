#include <algorithm>
#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
        int idx = lower_bound(a + 1, a + n + 1, m - a[i]) - a;
        if (a[idx] + a[i] == m && idx != i) {
            cout << a[i] << " " << a[idx];
            return 0;
        }
    }
    puts("No");
    return 0;
}