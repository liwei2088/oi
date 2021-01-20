#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int n, xmin[30], xmax[30], ymin[30], ymax[30], x[30], y[30];
vector<int> g[30];
int ans[30];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> xmin[i] >> xmax[i] >> ymin[i] >> ymax[i];
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
        for (int j = 1; j <= n; j++)
            if (x[i] >= xmin[j] && x[i] <= xmax[j] && y[i] >= ymin[j] &&
                y[i] <= ymax[j]) {
                g[j].push_back(i);
            }
    }
    for (int i = 1; i <= n; i++) {
        if (g[i].size() == 1) {
            ans[i] = g[i][0];
        }
    }
    return 0;
}