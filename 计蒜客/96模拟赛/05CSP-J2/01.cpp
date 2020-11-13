#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("stairs.in", "r", stdin);
    freopen("stairs.out", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long x = n / (k + k - 1);
        long long y = n % (k + k - 1);
        if (y > k)
            cout << x * 2 + 2 << endl;
        else if (y > 0)
            cout << x * 2 + 1 << endl;
        else
            cout << 2 * x << endl;
    }
    return 0;
}