#include <iostream>
using namespace std;
int n, ans;
int a[30];
void dfs(int k, int s) {
    if (s == 0) {
        if (k == 1) return;
        int l = 0, r = k - 1;
        while (l < r) {
            if (a[l] != a[r]) break;
            l++, r--;
        }
        if (l >= r) ans++;
        return;
    }
    if (k == n) return;
    for (int i = 1; i <= s; i++) {
        a[k] = i;
        dfs(k + 1, s - i);
        a[k] = 0;
    }
}

int main() {
    cin >> n;
    dfs(0, n);
    cout << ans;
    return 0;
}