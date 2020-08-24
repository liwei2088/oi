#include <iostream>
using namespace std;
int n, x;
int main() {
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        ans = max(ans, x);
    }
    cout << ans;
    return 0;
}