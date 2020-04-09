#include <algorithm>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    // transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (int i = 0; s[i]; i++) {
        s[i] = toupper(s[i]);
    }
    cout << s << endl;
    return 0;
}