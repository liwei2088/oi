#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int i = 0, j = 0;
    while (s[i]) {
        while (s[j] && s[j] == s[i]) j++;
        cout << j - i << s[i];
        i = j;
    }
    return 0;
}