#include <cstdio>
#include <iostream>
using namespace std;
const int N = 20;
int n, a[N];
bool st[N];

void dfs(int k) {
    if (k == n + 1) {
        for (int i = 1; i <= n; i++)
            if (st[i]) cout << i << " ";
        cout << endl;
        return;
    }
    st[k] = false;
    dfs(k + 1);
    st[k] = true;
    dfs(k + 1);
}

int main() {
    cin >> n;
    dfs(1);
    return 0;
}