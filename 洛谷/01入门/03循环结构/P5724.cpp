#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    int mx = 0, mi = 1005;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mx = max(mx, x);
        mi = min(mi, x);
    }
    cout << mx - mi;
    return 0;
}