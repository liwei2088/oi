#include <iostream>
using namespace std;

int dfs(int m, int n) {
    if (m == 0 || n == 1) return 1;
    if (m < n) return dfs(m, m);
    return dfs(m - n, n) + dfs(m, n - 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        cout << dfs(m, n) << endl;
    }
    return 0;
}