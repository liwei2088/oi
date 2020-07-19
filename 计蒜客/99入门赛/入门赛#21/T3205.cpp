#include <iostream>
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int a, b, k;
    cin >> a >> b;
    if (a < b) {
        k = gcd(a, b);
        cout << a / k << " " << b / k << endl;
    } else {
        if (a % b == 0) {
            cout << a / b << endl;
        } else {
            cout << a / b << " ";
            a = a - a / b * b;
            k = gcd(a, b);
            cout << a / k << " " << b / k << endl;
        }
    }
    return 0;
}