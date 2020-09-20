#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    for (int i = 0; i <= s.size() - 2; i++) {
        if (s[i] == s[i + 1] || s[i] == s[i + 2] || s[i + 1] == s[i + 2]) {
            cout << "Not a random string";
            return 0;
        }
    }
    cout << "Random string";
    return 0;
}