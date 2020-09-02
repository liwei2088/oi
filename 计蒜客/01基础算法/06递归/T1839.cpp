#include <cmath>
#include <iostream>
using namespace std;

int dfs(int n) {
    if (n == 0) return 0;
    if (n % 2 == 0)
        return dfs(n / 4) + n / 2;
    else
        return dfs(n / 4) + ceil(n / 2.0);
}

int main() {
    int n;
    cin >> n;
    cout << dfs(n);
    return 0;
}