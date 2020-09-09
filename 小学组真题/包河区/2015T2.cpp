#include <iostream>
using namespace std;

bool zs(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, x;
    cin >> n;
    int mx = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        for (int k = x; k >= 1; k--) {
            if (x % k == 0 && zs(k)) {
                if (k > mx) {
                    mx = k;
                    ans = x;
                    break;
                }
            }
        }
    }
    cout << ans;
    return 0;
}