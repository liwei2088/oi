#include <iostream>
using namespace std;
int n, m, g[1005][1005];

void insert(int x1, int y1, int x2, int y2, int c) {
    g[x1][y1] += c;
    g[x2 + 1][y1] -= c;
    g[x1][y2 + 1] -= c;
    g[x2 + 1][y2 + 1] += c;
}

int main() {
    int x1, y1, x2, y2;
    cin >> n >> m;
    while (m--) {
        cin >> x1 >> y1 >> x2 >> y2;
        insert(x1, y1, x2, y2, 1);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            g[i][j] += g[i - 1][j] + g[i][j - 1] - g[i - 1][j - 1];
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}