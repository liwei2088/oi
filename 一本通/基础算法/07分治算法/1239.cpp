#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;
const int N = 100005;
int n, m, a[N];
int main() {
    int x, idx, res;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &x);
        //左边界要单独处理 右边界对结果没有影响
        if (x <= a[1])
            res = a[1];
        else {
            idx = lower_bound(a + 1, a + n + 1, x) - a;
            res = abs(a[idx] - x) > abs(a[idx - 1] - x) ? a[idx - 1] : a[idx];
        }
        cout << res << endl;
    }
    return 0;
}