#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005, M = 1000005;
int n, q[N];
bool st[M];
int main() {
    int x;
    scanf("%d", &n);
    int f = 1, r = 1;
    int ans = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        if (!st[x]) {
            q[r++] = x;
            st[x] = true;
            cnt++;
            ans = max(ans, cnt);
            continue;
        }
        while (q[f] != x) {
            st[q[f]] = false;
            f++;
            cnt--;
        }
        f++;
        q[r++] = x;
    }
    printf("%d", ans);
    return 0;
}