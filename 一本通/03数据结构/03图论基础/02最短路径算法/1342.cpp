#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
const int INF = 1e9;
int n, m;
double g[105][105];
struct node {
    int x, y;
} p[105];

void floyd() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j)
                g[i][j] = 0;
            else
                g[i][j] = INF;
    for (int i = 1; i <= n; i++) cin >> p[i].x >> p[i].y;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        double dis = sqrt((p[a].x - p[b].x) * (p[a].x - p[b].x) +
                          (p[a].y - p[b].y) * (p[a].y - p[b].y));
        g[a][b] = g[b][a] = dis;
    }
    floyd();
    int a, b;
    cin >> a >> b;
    printf("%.2lf", g[a][b]);
    return 0;
}