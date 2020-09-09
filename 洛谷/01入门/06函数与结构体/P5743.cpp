#include <iostream>
using namespace std;
int n;
int dfs(int k, int c) {
    if (k == 1)
        return c;
    else
        return dfs(k - 1, (c + 1) * 2);
}

int main() {
    cin >> n;
    cout << dfs(n, 1);
    return 0;
}