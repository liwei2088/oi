#include <iostream>
using namespace std;
int s, x, y;
int main() {
    int ans = 1e9;
    cin >> s >> x >> y;
    for (int i = 0; i <= 2000; i++)
        for (int j = 0; j <= 2000; j++)
            if (s >= i * x + j * y) {
                int t = s - i * x - j * y;
                ans = min(ans, t);
            }
    cout << ans;
    return 0;
}