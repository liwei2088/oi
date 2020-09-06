#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long x, y;
        cin >> x >> y;
        cout << gcd(x, y) << endl;
    }
    return 0;
}