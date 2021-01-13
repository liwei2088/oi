#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int t = 0, ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'Y')
            ans += min(++t, 5);
        else
            t = 0;
    }
    cout << ans;
    return 0;
}