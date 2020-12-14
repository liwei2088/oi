#include <cstring>
#include <iostream>
using namespace std;
int n, m, k, d[505], b[505];
struct node {
    int a, b, w;
} edge[10005];

int bf() {
    d[1] = 0;
    for (int i = 1; i <= k; i++) {
        //注意b数组备份上一次的最短路径 放置更新过程的数据混乱
        memcpy(b, d, sizeof(d));
        for (int j = 1; j <= m; j++) {
            int u = edge[j].a, v = edge[j].b, w = edge[j].w;
            d[v] = min(d[v], b[u] + w);
        }
    }
}

int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edge[i] = {a, b, c};
    }
    memset(d, 0x3f, sizeof(d));
    bf();
    if (d[n] > 0x3f3f3f3f / 2)
        cout << "impossible";
    else
        cout << d[n];
    return 0;
}