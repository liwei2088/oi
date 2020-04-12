#include <cstring>
#include <iostream>
using namespace std;
string s, ans;
int main() {
    int mx = 0;
    while (cin >> s) {
        int n = s.size();
        if (s[n - 1] == '.') s = s.substr(0, n - 1);
        if (mx < n) {
            mx = n;
            ans = s;
        }
    }
    cout << ans;
    return 0;
}