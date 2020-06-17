#include <iostream>
using namespace std;
int n, path[10];
bool st[10];

void dfs(int k) {
    if (k == n + 1) {
        for (int i = 1; i <= n; i++) cout << path[i] << " ";
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
        if (!st[i]) {
            st[i] = true;
            path[k] = i;
            dfs(k + 1);
            st[i] = false;
        }
}

int main() {
    cin >> n;
    dfs(1);
    return 0;
}