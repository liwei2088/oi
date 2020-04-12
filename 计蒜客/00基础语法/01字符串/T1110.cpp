#include <iostream>
using namespace std;
string s;
int main() {
    getline(cin, s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'z')
            s[i] = 'a';
        else if (s[i] == 'Z')
            s[i] = 'A';
        else if (s[i] >= 'a' && s[i] <= 'y' || s[i] >= 'A' && s[i] <= 'Y')
            s[i] = s[i] + 1;
    }
    cout << s;
    return 0;
}