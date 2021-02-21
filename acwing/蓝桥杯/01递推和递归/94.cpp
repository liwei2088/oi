#include <cstdio>
#include <iostream>
using namespace std;
const int N = 10;
int n, a[N];
bool st[N];

void dfs(int k) {
    if (k == n + 1) {
        for (int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
        if (!st[i]) {
            a[k] = i;
            st[i] = true;
            dfs(k + 1);
            a[k] = 0;
            st[i] = false;
        }
}

int main() {
    cin >> n;
    dfs(1);
    return 0;
}