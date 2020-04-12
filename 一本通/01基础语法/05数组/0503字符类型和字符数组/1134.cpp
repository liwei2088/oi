#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    if (s[0] >= '0' && s[0] <= '9') {
        cout << "no";
        return 0;
    }
    for (int i = 0; s[i]; i++)
        if (!(s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z' ||
              s[i] >= 'A' && s[i] <= 'Z' || s[i] == '_')) {
            cout << "no";
            return 0;
        }
    cout << "yes";
    return 0;
}