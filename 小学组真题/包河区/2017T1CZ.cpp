#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

long long lcm(int a, int b) { return a * 1ll * b / gcd(a, b); }

int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}