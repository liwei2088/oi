#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    int ans = 0;
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            ans += s[i] - 'A' + 1;
        else
            ans += s[i] - 'a' + 1;
    }
    cout << ans;
    return 0;
}