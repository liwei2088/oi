#include <iostream>
using namespace std;
int n, p, a[10];

void dfs(int k) {
    if (k == n) {
        for (int i = 0; i < n; i++) cout << a[i];
        cout << endl;
        return;
    }
    for (int i = 1; i <= p; i++) {
        a[k] = i;
        dfs(k + 1);
    }
}

int main() {
    cin >> n >> p;
    dfs(0);
    return 0;
}