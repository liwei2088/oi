#include <cstring>
#include <iostream>
using namespace std;
string s;
int ch[26];
int main() {
    cin >> s;
    for (int i = 0; s[i]; i++) ch[s[i] - 'a']++;
    for (int i = 0; s[i]; i++)
        if (ch[s[i] - 'a'] == 1) {
            cout << s[i];
            return 0;
        }
    cout << "no";
    return 0;
}