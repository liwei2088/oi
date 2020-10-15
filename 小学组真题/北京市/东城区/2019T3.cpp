#include <iostream>
using namespace std;
string s;
int a[26];
int main() {
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            a[s[i] - 'A']++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        for (int j = 1; j <= a[i]; j++) cout << char(i + 'a');
    return 0;
}