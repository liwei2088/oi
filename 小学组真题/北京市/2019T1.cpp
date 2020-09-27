#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

bool ss(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    long long s;
    if (gcd(n, m) == 1)
        s = n + m;
    else
        s = n * 1ll * m;
    cout << s << endl;
    if (ss(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}