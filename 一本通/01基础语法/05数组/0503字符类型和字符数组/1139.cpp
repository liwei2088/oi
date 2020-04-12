#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int n;
int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
        cout << s << endl;
    }
    return 0;
}