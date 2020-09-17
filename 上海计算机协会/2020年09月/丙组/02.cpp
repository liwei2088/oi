#include <algorithm>
#include <iostream>
using namespace std;
int d[] = {0, 1, 12, 13, 14, 15, 9, 17, 8, 6};
int main() {
    string s, t;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        t.push_back(d[s[i] - '0'] + '0');
    }
    reverse(t.begin(), t.end());
    if (s == t)
        cout << "Strobogrammatic number";
    else
        cout << "Not a strobogrammatic number";
    return 0;
}