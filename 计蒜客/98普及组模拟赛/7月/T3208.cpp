#include <iostream>
using namespace std;
long long n, x, y, r;
int main() {
    cin >> n;
    cin >> x >> y >> r;
    int ans = 0;
    while (n--) {
        int u, v;
        cin >> u >> v;
        if ((x - u) * (x - u) + (y - v) * (y - v) <= r * r) ans++;
    }
    cout << ans;
    return 0;
}