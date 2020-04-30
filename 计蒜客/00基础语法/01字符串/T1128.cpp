#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int n = s.size();
    int i = 0, j = 0;
    while (i < n) {
        while (j < n && s[i] == s[j]) j++;
        cout << j - i << s[i];
        i = j;
    }
    return 0;
}