#include <cstdio>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int sum = 0;
    for (int i = 0, j = 1; i < s.size() - 1; i++) {
        if (s[i] == '-') continue;
        sum += (s[i] - '0') * j;
        j++;
    }
    char ch = 'X';
    if (sum % 11 != 10) ch = (sum % 11) + '0';
    if (s[s.size() - 1] == ch)
        cout << "Right";
    else
        s[s.size() - 1] = ch, cout << s;
    return 0;
}