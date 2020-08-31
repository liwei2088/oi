#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;
int n, a[10];
bool st[10];
void dfs(int k) {
    if (k == n + 1) {
        for (int i = 1; i <= n; i++) printf("%5d", a[i]);
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (st[i] == false) {
            st[i] = true;
            a[k] = i;
            dfs(k + 1);
            st[i] = false;
            a[k] = 0;
        }
    }
}
int main() {
    cin >> n;
    dfs(1);
    return 0;
}