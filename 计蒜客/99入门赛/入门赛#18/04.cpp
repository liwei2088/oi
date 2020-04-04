#include <cmath>
#include <iostream>
using namespace std;
const int MOD = 10007;

int work(int n) {
    int f1 = 1, f2 = 2, fn;
    for (int i = 3; i <= n; i++) {
        fn = (f1 + f2) % MOD;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}

int main() {
    int a, b, c, t;
    cin >> a >> b;
    if (a > b) swap(a, b);
    t = a * a + b * b;
    c = sqrt(t);
    if (c * c == t) {
        cout << work(c);
        return 0;
    }
    t = b * b - a * a;
    c = sqrt(t);
    if (c * c == t) {
        cout << work(c);
        return 0;
    }
    return 0;
}