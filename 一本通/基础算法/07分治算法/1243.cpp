#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N];

bool check(int k) {
    int s = 0, cnt = 1;
    for (int i = 1; i <= n; i++) {
        if (s + a[i] > k) {
            cnt++;
            s = a[i];
        } else {
            s += a[i];
        }
    }
    return cnt <= m;
}

int main() {
    int s = 0, mx = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
        mx = max(mx, a[i]);
    }
    int l = mx, r = s, mid;  //要注意边界的问题 连续错了好几次
    while (l < r) {
        mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    printf("%d", l);
    return 0;
}