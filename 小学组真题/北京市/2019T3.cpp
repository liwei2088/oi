#include <iostream>
using namespace std;
const int MOD = 10007;
string s;
int main() {
    cin >> s;
    int ans = 1;
    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && s[i + 1] == '.') {
            if (i + 2 < s.size() && s[i + 2] >= '5') {
                int t = s[i] - '0' + 1;
                if (t == 10)
                    s[i] = '0';
                else
                    s[i] = s[i] + 1;
            }
            ans = (ans * (s[i] - '0')) % MOD;
            break;
        }
        ans = (ans * (s[i] - '0')) % MOD;
    }
    cout << ans;
    return 0;
}