#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) ans += s[i] - '0';
    cout << ans;
    return 0;
}