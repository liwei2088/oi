#include <iostream>
using namespace std;

int main() {
    int n, ans = 1e9;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ans = min(ans, x);
    }
    cout << ans;
    return 0;
}