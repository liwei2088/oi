#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    int mx = -10000, mi = 10000, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        mx = max(mx, x);
        mi = min(mi, x);
    }
    cout << mx - mi;
    return 0;
}