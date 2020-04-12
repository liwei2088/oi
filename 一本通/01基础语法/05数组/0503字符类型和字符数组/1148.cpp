#include <cstring>
#include <iostream>
using namespace std;
int ch[200], k;
string s;
int main() {
    cin >> k;
    cin >> s;
    int i = 0, j = 0;
    while (s[i]) {
        while (s[j] && s[i] == s[j]) j++;
        if (j - i >= k) {
            cout << s[i];
            return 0;
        }
        i = j;
    }
    cout << "No";
    return 0;
}