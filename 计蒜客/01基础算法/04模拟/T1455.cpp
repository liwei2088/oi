#include <iostream>
#include <sstream>
using namespace std;
int n;
int main() {
    cin >> n;
    if (n < 10) {
        cout << 9;
        return 0;
    }
    int ans = 9;
    for (int i = 10; i <= n; i++) {
        int a[15] = {0};
        int t = i, c = 0;
        while (t) {
            a[++c] = t % 10;
            t /= 10;
        }
        bool f = true;
        for (int i = 1; i <= c / 2; i++)
            if (a[i] != a[c - i + 1]) {
                f = false;
                break;
            }
        if (f == true) ans++;
    }
    cout << ans;
    return 0;
}