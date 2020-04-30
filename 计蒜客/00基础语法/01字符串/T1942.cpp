#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    if (s.size() < 8 || s.size() > 16) {
        cout << "No";
        return 0;
    }
    if (s[0] < 'A' || s[0] > 'Z') {
        cout << "No";
        return 0;
    }
    bool f1 = false, f2 = false, f3 = false;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') f1 = true;
        if (s[i] >= '0' && s[i] <= '9') f2 = true;
        if (s[i] == '~' || s[i] == '!' || s[i] == '@' || s[i] == '#' ||
            s[i] == '$' || s[i] == '%' || s[i] == '^' || s[i] == '.')
            f3 = true;
    }
    if (f1 && f2 && f3)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}