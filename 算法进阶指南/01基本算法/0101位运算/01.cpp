#include <iostream>
using namespace std;

int main() {
    int a, b, p;
    cin >> a >> b >> p;
    int ans = 1 % p;
    while (b) {
        if (b & 1) ans = (ans * 1ll * a) % p;
        a = (a * 1ll * a) % p;
        b >>= 1;
    }
    cout << ans;
    return 0;
}