#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    int ans = 0;
    cin >> s;
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) ans++;
        l++;
        r--;
    }
    cout << ans;
    return 0;
}