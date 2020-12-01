#include <iostream>
using namespace std;

int main() {
    int n, m, ans = 1;
    cin >> n >> m;
    while (n != m) {
        if (n < m) swap(n, m);
        n -= m;
        ans++;
    }
    cout << ans;
    return 0;
}