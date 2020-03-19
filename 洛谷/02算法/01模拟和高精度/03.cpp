#include <iostream>
using namespace std;
int n;

void dfs(int k) {
    if (k == 1) {
        cout << "1 ";
        return;
    }
    if (k % 2 == 0)
        dfs(k / 2);
    else
        dfs(3 * k + 1);
    cout << k << " ";
}

int main() {
    cin >> n;
    dfs(n);
    return 0;
}