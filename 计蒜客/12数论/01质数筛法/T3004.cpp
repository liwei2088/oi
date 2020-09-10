#include <iostream>
using namespace std;

bool isprime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

bool hw(int x) {
    int t = x, s = 0;
    while (t) {
        s = s * 10 + t % 10;
        t /= 10;
    }
    return x == s;
}

int main() {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for (int i = l; i <= r; i++)
        if (isprime(i) && hw(i)) ans++;
    cout << ans;
    return 0;
}