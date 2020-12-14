#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
using namespace std;
typedef pair<int, int> PII;
const int N = 150005;
int n, m, h[N], e[N], ne[N], w[N], idx, d[N];
bool st[N];
priority_queue<PII, vector<PII>, greater<PII> > q;

void add(int a, int b, int c) {
    e[idx] = b;
    ne[idx] = h[a];
    w[idx] = c;
    h[a] = idx++;
}

int dijkstra() {
    memset(d, 0x3f, sizeof(d));
    d[1] = 0;
    q.push({0, 1});  //第一个数字存距离 第二个数字存节点编号
    while (q.size()) {
        PII p = q.top();                  //优先队列中取出距离最小值
        q.pop();                          //出队
        int u = p.second, dis = p.first;  //获取最小值的节点编号和距离
        //由于优先队列中可能会有重复节点，所以需要判断是否已经使用
        if (st[u]) continue;
        st[u] = true;
        for (int i = h[u]; i != -1; i = ne[i]) {
            int j = e[i];
            if (d[j] > dis + w[i]) {  //如果<1,j>距离大于<1,u>+<u,j>的距离就更新
                d[j] = dis + w[i];
                q.push({d[j], j});
            }
        }
    }
    if (d[n] == 0x3f3f3f3f) return -1;
    return d[n];
}

int main() {
    scanf("%d%d", &n, &m);
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
    }
    int ans = dijkstra();
    printf("%d\n", ans);
    return 0;
}