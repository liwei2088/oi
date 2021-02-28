#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 1005;
typedef pair<int, int> PII;
int n, m, k, d;
queue<PII> q;
long long dis[N][N];
struct node {
    int x, y, c;
} t[N * N];
bool g[N][N];
int dr[][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void dfs() {
    while (q.size()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int xx = x + dr[i][0], yy = y + dr[i][1];
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && !g[xx][yy]) {
                if (dis[xx][yy] > dis[x][y] + 1) {
                    dis[xx][yy] = dis[x][y] + 1;
                    q.push({xx, yy});
                }
            }
        }
    }
}

int main() {
    scanf("%d%d%d%d", &n, &m, &k, &d);
    memset(dis, 0x3f, sizeof(dis));
    for (int i = 1; i <= m; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        dis[x][y] = 0;
        q.push({x, y});
    }
    for (int i = 1; i <= k; i++) {
        int x, y, c;
        scanf("%d%d%d", &x, &y, &c);
        t[i] = {x, y, c};
    }
    for (int i = 1; i <= d; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        g[x][y] = true;
    }
    dfs();
    long long ans = 0;
    for (int i = 1; i <= k; i++) ans += dis[t[i].x][t[i].y] * t[i].c;
    printf("%lld", ans);
    return 0;
}