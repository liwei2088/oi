#include <iostream>
using namespace std;
int n, m;
string s, t;

void dfs(int u, int v) {
    if (t.size() == m) {
        cout << t << endl;
        return;
    }
    if (u == n) return;
    for (int i = v; i < n; i++) {
        t.push_back(s[i]);
        dfs(u + 1, i + 1);
        t.erase(t.size() - 1);
    }
}

int main() {
    cin >> n >> m;
    cin >> s;
    dfs(0, 0);
    return 0;
}