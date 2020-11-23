#include <iostream>
using namespace std;

bool ss(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 2; i <= n - 2; i++) {
        if (ss(i) && ss(i + 2)) ans++;
    }
    cout << ans;
    return 0;
}