#include <algorithm>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] += 3;
            if (s[i] > 'z') s[i] -= 26;
            s[i] -= 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 3;
            if (s[i] > 'Z') s[i] -= 26;
            s[i] += 32;
        }
    }
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}