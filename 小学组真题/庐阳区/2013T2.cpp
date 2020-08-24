#include <iostream>
using namespace std;
string s, a, b;
int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            a.push_back(s[i]);
        else
            b.push_back(s[i]);
    }
    cout << b << a;
    return 0;
}