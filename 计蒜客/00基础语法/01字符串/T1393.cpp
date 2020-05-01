#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    getline(cin, s);
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] - 'A' + 3) % 26 + 'A';
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] - 'a' + 3) % 26 + 'a';
        cout << s[i];
    }
    return 0;
}