#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
const int INF = 0x3f3f3f3f;
int n, s, g[85][85];

void floyd() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            string t;
            cin >> t;
            if (t == "-")
                g[i][j] = INF;
            else
                g[i][j] = atoi(t.c_str());
        }
    floyd();
    for (int i = 1; i <= n; i++)
        if (s != i) printf("(%d -> %d) = %d\n", s, i, g[s][i]);
    return 0;
}