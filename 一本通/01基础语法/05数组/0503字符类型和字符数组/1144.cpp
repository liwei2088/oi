#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s;
//可能包含多个空格
int main() {
    getline(cin, s);
    int i = 0, j = 0;
    while (s[i]) {
        while (s[j] && s[j] != ' ') j++;
        reverse(s.begin() + i, s.begin() + j);
        cout << s.substr(i, j - i);
        while (s[j] && s[j] == ' ') cout << " ", j++;
        i = j;
    }
    return 0;
}