#include <iostream>
using namespace std;
int n;
int qmi(int a, int b, int mod) {
    int r = 1;
    a = a % mod;
    while (b) {
        if (b & 1) r = (r * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return r;
}
int main() {
    cin >> n;
    cout << qmi(2, n, 2015) - 1;
    return 0;
}