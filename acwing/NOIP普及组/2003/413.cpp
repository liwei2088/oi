#include <cstdio>
#include <iostream>
using namespace std;
string s, t;

void work(int score) {
    int a = 0, b = 0;
    for (int i = 0; s[i] != 'E'; i++) {
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
    int a = 0, b = 0;
    work(11);
    cout << endl;
    work(21);
    return 0;
}