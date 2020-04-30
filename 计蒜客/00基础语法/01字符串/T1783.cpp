#include <cstring>
#include <iostream>
using namespace std;
int n;
string s;
int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        for (int i = 0; s[i]; i++) {
            if (s[i] == 'C' || s[i] == 'A' || s[i] == 'T') continue;
            s.erase(s.begin() + i);
            i--;
        }
        if (s == "CAT")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}