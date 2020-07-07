#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

string t, s;

void f(int score) {
    int a = 0, b = 0;
    for (int i = 0; i < s.size() && s[i] != 'E'; i++) {
        if (s[i] == 'W')
            a++;
        else
            b++;
        if (max(a, b) >= score && abs(a - b) >= 2) {
            cout << a << ":" << b << endl;
            a = 0, b = 0;
        }
    }
    cout << a << ":" << b << endl;
}

int main() {
    while (cin >> t) s += t;
    f(11);
    cout << endl;
    f(21);
    return 0;
}