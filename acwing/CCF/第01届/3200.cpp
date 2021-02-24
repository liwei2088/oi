#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

/**
 * 就是用djstra算法 只不过在求最优解的时候需要判断进过的新节点数量
 * 队列优化的djstra算法 需要保存一个新增节点个数
 */

#define x first
#define y second
const int N = 210, M = N * N;
typedef long long LL;
typedef pair<int, int> PII;
int n, m, k, r;
PII p[N];
int h[N], e[M], ne[M], idx;
int dist[N][N];  //保存两个路由器之间距离

//判断两个路由器之间是否能够通信 要求:距离 <= r
bool check(PII a, PII b) {
    LL dx = a.x - b.x;
    LL dy = a.y - b.y;
    return dx * dx + dy * dy <= (LL)r * r;
}

//加边操作
void add(int a, int b) {
    idx++;
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}

int bfs() {
    queue<PII> q;
    q.push({1, 0});
    memset(dist, 0x3f, sizeof(dist));
    dist[1][0] = 0;
    while (q.size()) {
        PII t = q.front();
        q.pop();
        for (int i = h[t.x]; i; i = ne[i]) {
            int x = e[i], y = t.y;
            if (x > n) y++;
            if (y <= k) {
                if (dist[x][y] > dist[t.x][t.y] + 1) {
                    dist[x][y] = dist[t.x][t.y] + 1;
                    q.push({x, y});
                }
            }
        }
    }
    int res = 1e8;
    for (int i = 0; i <= k; i++) res = min(res, dist[2][i]);
    return res - 1;
}

int main() {
    cin >> n >> m >> k >> r;
    for (int i = 1; i <= n; i++) cin >> p[i].x >> p[i].y;
    for (int i = n + 1; i <= n + m; i++) cin >> p[i].x >> p[i].y;

    for (int i = 1; i <= n + m; i++)
        for (int j = i + 1; j <= n + m; j++)
            if (check(p[i], p[j])) add(i, j), add(j, i);  //通信是双向
    cout << bfs() << endl;
    return 0;
}