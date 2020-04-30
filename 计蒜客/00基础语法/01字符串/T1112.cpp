#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] - 'A' + 3) % 26 + 'A' + 32;
        else
            s[i] = (s[i] - 'a' + 3) % 26 + 'a' - 32;
    }
    for (int i = s.size() - 1; i >= 0; i--) cout << s[i];
    return 0;
}