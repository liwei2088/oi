#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string n;
int mod(string s, int b) {
    int r = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        r = r * 10 + s[i] - '0';
        r %= b;
    }
    return r;
}

int main() {
    while (cin >> n) {
        int t = mod(n, 3);
        if (t == 0)
            cout << "Hua will win." << endl;
        else {
            cout << "Ming will win." << endl;
            cout << t << endl;
        }
    }
    return 0;
}