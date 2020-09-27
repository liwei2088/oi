#include <iostream>
using namespace std;
string s, t;
int main() {
    while (cin >> t) s += t;
    int a = 0, b = 0;
    for (int i = 0; s[i] != 'E'; i++) {
        if (s[i] == 'F')
            a++;
        else
            b++;
        if (max(a, b) >= 11 && abs(a - b) >= 2) {
            cout << a << ":" << b << endl;
            a = 0, b = 0;
        }
    }
    if (a != 0 || b != 0) cout << a << ":" << b << endl;
    return 0;
}