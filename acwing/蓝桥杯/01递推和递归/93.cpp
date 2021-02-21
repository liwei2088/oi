#include <cstdio>
#include <iostream>
using namespace std;
const int N = 30;
int n, m, a[N];
bool st[N];

void dfs(int k, int c) {
    if (c == m) {
        for (int i = 1; i <= m; i++) cout << a[i] << " ";
        cout << endl;
        return;
    }
    if (k == n + 1) return;
    for(int i=k)
}

int main() {
    cin >> n >> m;
    dfs(1, 0);
    return 0;
}