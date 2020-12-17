#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
const double INF = 1e15;
int n, x[155], y[155];
double g[155][155], d[155];
// mxl1表示未连接前的牧区最大长度 xml2 加上线路后的最大长度
double mxl1, mxl2 = INF;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (s[j] == '0') {
                    g[i][j] = g[j][i] = INF;
                } else {
                    g[i][j] = g[j][i] = sqrt((x[i] - x[j]) * (x[i] - x[j]) +
                                             (y[i] - y[j]) * (y[i] - y[j]));
                }
            }
        }
    }
    // folyd
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (g[i][j] != INF) {
                d[i] = max(d[i], g[i][j]);
            }
            mxl1 = max(mxl1, d[i]);
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (g[i][j] == INF) {
                double k = sqrt((x[i] - x[j]) * (x[i] - x[j]) +
                                (y[i] - y[j]) * (y[i] - y[j]));
                mxl2 = min(mxl2, d[i] + d[j] + k);
            }
    double ans = max(mxl1, mxl2);
    printf("%.6lf", ans);
    return 0;
}