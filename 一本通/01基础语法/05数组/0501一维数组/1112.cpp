#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n;
    int mx = -1e9, mi = 1e9;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        mx = max(mx, t);
        mi = min(mi, t);
    }
    cout << mx - mi;
    return 0;
}