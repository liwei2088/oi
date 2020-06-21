#include <iostream>
using namespace std;
char t;
bool st[20][20];
void dfs(int x, int y, int k) {
    if (k ==6) return;
    st[x][y] = true;
    if (t == 'P') {
        if (x <= 5) {
            if (!st[x + 1][y]) dfs(x + 1, y, k + 1);
        } else {
            if (y < 9 && !st[x][y + 1]) dfs(x, y + 1, k + 1);
            if (y > 1 && !st[x][y - 1]) dfs(x, y - 1, k + 1);
            if (x < 10 && !st[x + 1][y]) dfs(x + 1, y, k + 1);
        }
    } else {
        if (x >= 6) {
            if (!st[x - 1][y]) dfs(x - 1, y, k + 1);
        } else {
            if (y < 9 && !st[x][y + 1]) dfs(x, y + 1, k + 1);
            if (y > 1 && !st[x][y - 1]) dfs(x, y - 1, k + 1);
            if (x > 1 && !st[x - 1][y]) dfs(x - 1, y, k + 1);
        }
    }
}

int main() {
    cin >> t;
    int x, y;
    cin >> x >> y;
    dfs(x, y, 0);
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 9; j++)
            if (st[i][j]) cout << i << " " << j << endl;
    return 0;
}