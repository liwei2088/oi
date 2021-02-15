#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, last = 0;
    for (int i = 1; i <= n; i++) {
        int h;
        cin >> h;
        if (h > last) ans += h - last;
        last = h;
    }
    cout << ans;
    return 0;
}
