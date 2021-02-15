#include <cstdio>
#include <iostream>
using namespace std;

int qmi(int a, int b, int p) {
    int res = 1;
    while (b) {
        if (b & 1) res = (1ll * res * a) % p;
        a = (1ll * a * a) % p;
        b >>= 1;
    }
    return res % p;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, p;
        cin >> a >> b >> p;
        cout << qmi(a, b, p) << endl;
    }
    return 0;
}