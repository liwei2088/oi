#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    long long ans = 0;
    cin >> s;
    for (int i = 0; s[i]; i++) {
        ans += (s[i] - '0') * (i + 1);
    }
    cout << ans;
    return 0;
}