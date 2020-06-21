#include <iostream>
using namespace std;

int main() {
    int k, ans = 1;
    double s = 16, x = 16;
    cin >> k;
    while (s < k) {
        ans++;
        s += x / ans;
    }
    if (ans <= 365)
        cout << ans;
    else
        cout << -1;
    return 0;
}