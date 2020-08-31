#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, r, a[30];
bool st[30];

void dfs(int k) {
    if (k == r + 1) {
        for (int i = 1; i <= r; i++) printf("%3d", a[i]);
        printf("\n");
        return;
    }
    for (int i = a[k - 1] + 1; i <= n; i++) {
        a[k] = i;
        dfs(k + 1);
    }
}

int main() {
    cin >> n >> r;
    dfs(1);
    return 0;
}