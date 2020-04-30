#include <algorithm>
#include <iostream>
using namespace std;
string s;

int main() {
    getline(cin, s);
    int n = s.size();
    int i = 0, j = 0;
    while (i < n) {
        while (j < n && s[j] != ' ') j++;
        reverse(s.begin() + i, s.begin() + j);
        i = ++j;
    }
    cout << s;
    return 0;
}