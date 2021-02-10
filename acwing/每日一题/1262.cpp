#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
const int N = 105;
int n, a[N], b[N], t[N];
typedef pair<int, int> PII;
priority_queue<PII> q;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    for (int i = 2; i <= n; i++) cin >> t[i], t[i] += t[i - 1];
    int T;
    cin >> T;
    int ans = 0;
    //枚举只访问前i个池塘 然后求最大值
    for (int i = 1; i <= n; i++) {
        while (!q.empty()) q.pop();

        for (int j = 1; j <= i; j++) q.push({a[j], b[j]});
        //钓鱼的时间k = 总时间T-[1,i]鱼塘之间的移动时间
        int k = T - t[i], res = 0;
        for (int j = 1; j <= k; j++) {
            PII p = q.top();
            q.pop();
            if (p.first <= 0) break;  //如果所剩的鱼为0 则退出
            res += p.first;
            p.first -= p.second;
            q.push(p);
        }
        ans = max(ans, res);
    }
    cout << ans << endl;
    return 0;
}