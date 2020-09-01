#include <cmath>
#include <iostream>
using namespace std;
int r;
int main() {
    cin >> r;
    int ans = 0;
    for (int x = 1; x <= r; x++)
        for (int y = x + 1; y <= r; y++) {
            int t = x * x + y * y;
            if (sqrt(t) <= r && sqrt(t) == int(sqrt(t))) ans++;
        }
    cout << ans;
    return 0;
}