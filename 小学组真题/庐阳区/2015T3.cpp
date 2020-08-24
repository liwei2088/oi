#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'W')
            a++;
        else
            b++;
        if (max(a, b) >= 11 && abs(a - b) >= 2) {
            cout << a << ":" << b << endl;
            a = b = 0;
        }
    }
    cout << a << ":" << b << endl;
    return 0;
}