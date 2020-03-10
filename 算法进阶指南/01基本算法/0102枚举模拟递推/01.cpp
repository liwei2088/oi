#include <iostream>
using namespace std;
int n;

void dfs(int k, int s) {
    if (k == n) {
        for (int i = 0; i < n; i++)
            if (s >> i & 1) cout << i + 1 << " ";
        cout << endl;
        return;
    }
    dfs(k + 1, s);
    dfs(k + 1, s | 1 << k);
}

int main() {
    cin >> n;
    dfs(0, 0);
    return 0;
}