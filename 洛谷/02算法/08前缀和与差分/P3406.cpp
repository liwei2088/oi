#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, m;
long long s[N];
int main() {
    int p1, p2;
    scanf("%d%d", &n, &m);
    if (m <= 1) {
        cout << 0;
        return 0;
    }
    //题目第i段铁路连接i城市和i+1城市 也就是说 1->2 计费是在1号城市
    //右边界不需要处理
    //通过差分求出不同城市p[i]和p[j]之间的次数
    scanf("%d", &p1);
    for (int i = 2; i <= m; i++) {
        scanf("%d", &p2);
        if (p1 <= p2)
            s[p1]++, s[p2]--;
        else
            s[p2]++, s[p1]--;
        p1 = p2;
    }
    for (int i = 1; i <= n; i++) s[i] += s[i - 1];
    long long ans = 0;
    int a, b, c;
    for (int i = 1; i < n; i++) {
        scanf("%d%d%d", &a, &b, &c);
        if (s[i]) ans += min(s[i] * a, s[i] * b + c);
    }
    printf("%lld", ans);
    return 0;
}