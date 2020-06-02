#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const int N = 100005;
struct node {
    long long v;
    int s;
} a[N];
int n;
priority_queue<long long, vector<long long>, greater<long long> > q;

bool cmp(node x, node y) { return x.s > y.s; }
/*
    本题首先想到贪心算法 将能放人数最多的士兵选出来，但是这样选择武力值未必最大，所以需要枚举一下放入人数
    的值，但是如果讲人数较少的士兵放入团队中，则必须要有人退出，退出的人一定是武力值最小的。所以考虑使用
    优先队列。
    解题思路：
    1 按照s值递减排列
    2 依次放入士兵，如果士兵的放入人数超出最大人数则将武力值最小的踢出
*/
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].v >> a[i].s;
    sort(a + 1, a + n + 1, cmp);
    long long ans = 0, sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i].v;
        q.push(a[i].v);
        while (q.size() > a[i].s) {
            sum -= q.top();
            q.pop();
        }
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}