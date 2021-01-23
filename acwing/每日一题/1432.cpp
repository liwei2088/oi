#include <cstdio>
#include <iostream>
using namespace std;
int n, q[15], cnt;
bool a[15], b[30], c[30];

void dfs(int k) {
    if (k == n + 1) {
        cnt++;
        if (cnt <= 3) {
            for (int i = 1; i <= n; i++) cout << q[i] << " ";
            cout << endl;
        }
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!a[i] && !b[k - i + n] && !c[k + i]) {
            q[k] = i;
            a[i] = b[k - i + n] = c[k + i] = true;
            dfs(k + 1);
            a[i] = b[k - i + n] = c[k + i] = false;
        }
    }
}

int main() {
    cin >> n;
    dfs(1);
    cout << cnt;
    return 0;
}