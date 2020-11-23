#include <iostream>
using namespace std;
string s;
int main() {
    getline(cin, s);
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
            s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' ||
            s[i] == 'I' || s[i] == 'i') {
            ans++;
        }
    }
    cout << ans;
    return 0;
}