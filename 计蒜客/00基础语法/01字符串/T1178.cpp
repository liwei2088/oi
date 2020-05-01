#include <iostream>
using namespace std;
string s;
int a[26];
int main() {
    cin >> s;
    for (int i = 0; s[i]; i++) a[s[i] - 'a']++;
    int mx = 0;
    for (int i = 0; i < 26; i++) mx = max(mx, a[i]);
    for (int i = 0; i < 26; i++)
        if (a[i] == mx) {
            cout << char(i + 'a') << " " << mx;
            break;
        }
    return 0;
}