#include <cstring>
#include <iostream>
using namespace std;
string s, ans;
int main() {
    int mi = 201;
    while (cin >> s) {
        if (s[s.size() - 1] == '.') s.erase(s.size() - 1);
        int n = s.size();
        if (n != 0 && n < mi) {
            mi = n;
            ans = s;
        }
    }
    cout << ans;
    return 0;
}