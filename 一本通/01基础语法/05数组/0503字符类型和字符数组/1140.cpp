#include <cstring>
#include <iostream>
using namespace std;
string s1, s2;
int main() {
    cin >> s1 >> s2;
    if (s1.size() >= s2.size() && s1.find(s2) != string::npos) {
        cout << s2 << " is substring of " << s1;
        return 0;
    } else if (s1.size() <= s2.size() && s2.find(s1) != string::npos) {
        cout << s1 << " is substring of " << s2;
        return 0;
    }
    cout << "No substring";
    return 0;
}
