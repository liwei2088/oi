#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const int N = 355;
int n, m, c1, c2, d;
int sx, sy, ex, ey;
int g[N][N];
bool st[N][N];
bool w[N][N];
struct node {
    int x, y, stp, u, v;
};
queue<node> q;
vector<pair<int, int>> v;
int ans, cnt1, cnt2;
int dr[8][2] = {{1, 0}, {0, 1},   {-1, 0}, {0, -1},
                {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

void bfs(int x, int y, int u, int v) {
    st[x][y] = true;
    node t;
    t.x = x;
    t.y = y;
    t.u = u;
    t.v = v;
    t.stp = 0;
    q.push(t);
    while (!q.empty()) {
        node ft = q.front();
        q.pop();
        if (ft.x == ex && ft.y == ey) {
            if (ans > ft.stp) ans = ft.stp;
            if (ans == ft.stp && cnt1 + cnt2 > u + v)
                ans = ft.stp, cnt1 = u, cnt2 = v;
            if (ans == ft.stp && cnt1 + cnt2 == u + v && cnt1 > u)
                ans = ft.stp, cnt1 = u, cnt2 = v;
        }
        for (int i = 0; i < 8; i++) {
            int xx = ft.x + dr[i][0];
            int yy = ft.y + dr[i][1];
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && !w[xx][yy] &&
                !st[xx][yy]) {
                if (g[xx][yy] != 0) ft.u++;
                node nd;
                nd.x = xx;
                nd.y = yy;
                nd.stp = ft.stp + 1;
                nd.u = ft.u;
                nd.v = ft.v;
                q.push(nd);
                st[xx][yy] = true;
            }
        }
        for (int i = 0; i < 4; i++) {
            int xx = ft.x + dr[i][0] * d;
            int yy = ft.y + dr[i][1] * d;
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && !w[xx][yy] &&
                !st[xx][yy]) {
                if (g[xx][yy] != 0) ++ft.u;
                node nd;
                nd.x = xx;
                nd.y = yy;
                nd.stp = ft.stp + 1;
                nd.u = ft.u;
                nd.v = ++ft.v;
                q.push(nd);
                st[xx][yy] = true;
            }
        }
    }
}

int main() {
    char s[5];
    scanf("%d%d%d%d%d", &n, &m, &c1, &c2, &d);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf("%s", s);
            if (s[0] == '.')
                continue;
            else if (s[0] == 'S')
                sx = i, sy = j;
            else if (s[0] == 'T')
                ex = i, ey = j;
            else
                w[i][j] = true, g[i][j] = atoi(s), v.push_back(make_pair(i, j));
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (g[i][j] != 0 || w[i][j]) continue;
            for (int k = 0; k < v.size(); k++) {
                if (abs(i - v[k].first) + abs(j - v[k].second) <
                    g[v[k].first][v[k].second])
                    g[i][j] = 1;
            }
        }
    bfs(sx, sy, 0, 0);
    if (ans != 0)
        cout << ans << " " << cnt1 << " " << cnt2;
    else
        cout << "-1";
    return 0;
}