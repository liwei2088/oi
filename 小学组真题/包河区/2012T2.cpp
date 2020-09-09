#include <iostream>
using namespace std;
string s, zm, sz;
int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            sz.push_back(s[i]);
        else
            zm.push_back(s[i]);
    }
    cout << sz << zm;
    return 0;
}