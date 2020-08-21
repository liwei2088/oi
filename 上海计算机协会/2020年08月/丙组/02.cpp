#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = a, y = a, ans = a;
    while (x >= b || y >= c) {
        ans += x / b + y / c;
        int t = x / b + y / c;
        x = t + x % b;
        y = t + y % c;
    }
    cout << ans;
    return 0;
}