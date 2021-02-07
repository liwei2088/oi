#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1000005;
int n, m;
long long b[N];
int r[N], d[N], s[N], t[N];

bool check(int mid) {
    //求前缀和
    for (int i = 1; i <= n; i++) b[i] = r[i] - r[i - 1];
    //对区间[s,t] 减去 d[i]
    for (int i = 1; i <= mid; i++) {
        b[s[i]] -= d[i];
        b[t[i] + 1] += d[i];
    }
    //使用前缀和求修改后的r[i]的值 如果位负数 说明方案不可行
    for (int i = 1; i <= n; i++) {
        b[i] += b[i - 1];
        if (b[i] < 0) return true;
    }
    return false;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &r[i]);
    for (int i = 1; i <= m; i++) scanf("%d%d%d", &d[i], &s[i], &t[i]);
    if (!check(m)) {
        puts("0");
        return 0;
    }
    int lt = 1, rt = m;
    while (lt < rt) {
        int mid = (lt + rt) >> 1;
        // 这里如果返回true 表示的是不可行
        // 因为我们最终要求解的不可行
        if (check(mid))
            rt = mid;
        else
            lt = mid + 1;
    }
    printf("-1\n%d\n", rt);
    return 0;
}