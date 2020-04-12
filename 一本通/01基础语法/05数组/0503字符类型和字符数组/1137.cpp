#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] - 'a' + 3 + 26) % 26 + 'a';
            s[i] -= 32;
        } else {
            s[i] = (s[i] - 'A' + 3 + 26) % 26 + 'A';
            s[i] += 32;
        }
    }
    cout << s;
    return 0;
}