#include <cmath>
#include <iostream>
using namespace std;

int main() {
    long long n, x, y;
    cin >> n;
    long long ans = 0;
    for (long long i = n - 1; i >= 2; i--) {
        x = n * n - i * i;
        y = sqrt(x);
        if (x == y * y && y <= i) {
            ans += y / 2;
        }
    }
    cout << ans;
}