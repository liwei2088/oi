#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s, t;
int main() {
    cin >> s;
    t = s;
    reverse(s.begin(), s.end());
    if (t == s)
        cout << "yes";
    else
        cout << "no";
    return 0;
}