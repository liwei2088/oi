#include <iostream>
using namespace std;
int n, m, a[25][305];

void bfs(int k) {}

int main() {
    while (cin >> n >> m) {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) cin >> a[i][j];
        bool f = false;
        for (int i = 1; i <= n; i++)
            if (dfs(i)) {
                f = true;
                break;
            }
        if (f == false)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}