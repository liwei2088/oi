#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
string s;
char ch;
int main() {
    cin >> s >> ch;
    int ans = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ch) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}