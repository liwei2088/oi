#include <iostream>
using namespace std;
int m, n;
int main() {
    cin >> m >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x < m) ans++;
    }
    cout << ans;
    return 0;
}