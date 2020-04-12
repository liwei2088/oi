#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    string t = s;
    reverse(s.begin(), s.end());
    if (t == s)
        cout << "yes";
    else
        cout << "no";
    return 0;
}