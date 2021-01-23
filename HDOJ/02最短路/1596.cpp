#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 1005;
int n, m;
double g[N][N];

void floyd() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++) {
            if (g[i][k] == 0) continue;
            for (int j = 1; j <= n; j++)
                g[i][j] = max(g[i][j], g[i][k] * g[k][j]);
        }
}

int main() {
    while (scanf("%d", &n) != EOF) {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) scanf("%lf", &g[i][j]);
        floyd();
        scanf("%d", &m);
        while (m--) {
            int a, b;
            scanf("%d%d", &a, &b);
            if (g[a][b] == 0)
                puts("What a pity!");
            else
                printf("%.3lf\n", g[a][b]);
        }
    }
    return 0;
}