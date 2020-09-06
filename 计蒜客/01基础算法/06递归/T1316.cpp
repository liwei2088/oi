#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    long long n, m;
    cin >> n >> m;
    cout << n * m / gcd(n, m);
    return 0;
}