#include <cstring>
#include <iostream>
using namespace std;
string s;
int ch[26];
int main() {
    int mx = 0;
    for (int i = 1; i <= 4; i++) {
        getline(cin, s);
        
        for (int j = 0; s[j]; j++)
            if (s[j] >= 'A' && s[j] <= 'Z') {
                ch[s[j] - 'A']++;
                mx = max(mx, ch[s[j] - 'A']);
            }
    }

    for (int i = mx; i >= 1; i--) {
        for (int j = 0; j < 26; j++) {
            if (ch[j] >= i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (char i = 'A'; i <= 'Z'; i++) cout << i << " ";
    return 0;
}