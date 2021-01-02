#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>
using namespace std;
const int INF = 0x3f3f3f3f;
int n, m, g[505][505], a[505];

void floyd() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main() {
    scanf("%d%d\n", &m, &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j)
                g[i][j] = 0;
            else
                g[i][j] = INF;

    for (int i = 1; i <= m; i++) {
        string s;
        stringstream sstream;
        getline(cin, s);
        sstream << s;
        int x, tt = 0;
        while (sstream >> x) {
            a[++tt] = x;
        }
        for (int j = 1; j <= tt; j++)
            for (int k = j + 1; k <= tt; k++) g[a[j]][a[k]] = 1;
    }
    floyd();
    if (g[1][n] >= INF)
        cout << "NO" << endl;
    else
        cout << g[1][n] - 1 << endl;
    return 0;
}