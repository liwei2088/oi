#include <cstdio>
#include <iostream>
using namespace std;
string s, t;
int main() {
    cin >> s >> t;
    string k = t;
    while (t.size() < s.size()) {
        t += k;
    }
    if (t == s)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}