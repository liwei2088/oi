/**
 * 约翰有N(1≤N≤50000)头牛，约翰的草地可以认为是一条直线．
 * 每只牛只喜欢在某个特定的范围内吃草．第i头牛喜欢在区间(Si，Ei)吃草，1≤Si<Ei≤1,000,000,00.
 * 奶牛们都很自私，他们不喜欢和其他奶牛共享自己喜欢吃草的领域，因此约翰要保证任意
 * 两头牛都不会共享他们喜欢吃草昀领域．如果奶牛i和奶牛J想要同时吃草，
 * 那么要满足：Si>=Ej或者Ei≤Sj．约翰想知道在同一时刻，最多可以有多少头奶牛同时吃草？
 */
#include <algorithm>
#include <iostream>
using namespace std;
const int N = 50005;
int n;
struct node {
    int s, e;
} a[N];

bool cmp(node x, node y) {
    if (x.e == y.e) return x.s < y.s;
    return x.e < y.e;
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].s >> a[i].e;
    sort(a + 1, a + n + 1, cmp);
    int ans = 0, t = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i].s >= t) {
            ans++;
            t = a[i].e;
        }
    }
    cout << ans;
    return 0;
}