#include <iostream>
using namespace std;
int n;
string s;
int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
        for (int i = 1; s[i]; i++)
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        cout << s << endl;
    }
    return 0;
}