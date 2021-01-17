/**
 *  根据题意 1 枚举到 n 但是这样做每次都要重新初始化并查集
 *  多以采用 n~1 每次将j~n所有点合并，如果合并数量>n/2 则满足条件
 */

#include <cstdio>
#include <iostream>
using namespace std;
int n, p[1005], c[1005], g[1005][1005];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) p[i] = i, c[i] = 1;
    for (int i = 1; i <= n; i++) {
        cin >> g[i][0];
        for (int j = 1; j <= g[i][0]; j++) cin >> g[i][j];
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= g[i][0]; j++) {
            if (g[i][j] > i) {  //注意需要合并的是j~n中所有的点
                int x = find(i), y = find(g[i][j]);
                if (x != y) {
                    p[y] = x;
                    c[x] += c[y];
                    if (c[x] > n / 2) {
                        cout << i << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}