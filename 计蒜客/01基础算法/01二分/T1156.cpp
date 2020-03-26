#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N];
int main() {
    int idx, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &x);
        if (x <= a[1]) {
            cout << a[1] << endl;
            continue;
        }
        if (x >= a[n]) {
            cout << a[n] << endl;
            continue;
        }
        idx = lower_bound(a + 1, a + n + 1, x) - a;
        idx = abs(a[idx] - x) >= abs(a[idx - 1] - x) ? idx - 1 : idx;  
        printf("%d\n", a[idx]);
    }
    return 0;
}