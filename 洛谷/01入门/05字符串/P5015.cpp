#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    int ans = 0;
    getline(cin, s);
    for (int i = 0; s[i]; i++) {
        if (s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= 'A' && s[i] <= 'Z')
            ans++;
    }
    cout << ans;
    return 0;
}