#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
string s;
string n;

string sub(string t) {
    string ans;
    reverse(t.begin(), t.end());
    int k = 0;
    for (int i = 0; i < t.size(); i++) {
        k = (t[i] - '0') - k;
        if (i == 0) k--;
        ans.push_back((k + 10) % 10 + '0');
        if (k < 0)
            k = 1;
        else
            k = 0;
    }
    while (ans.size() > 1 && ans[ans.size() - 1] == '0')
        ans.erase(ans.size() - 1);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    cin >> s;
    cin >> n;
    while (n != "0") {
        bool f = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] < s[i - 1]) {
                s.erase(i - 1, 1);
                f = true;
                break;
            }
        }
        if (!f) s.erase(s.size() - 1);
        n = sub(n);
    }
    reverse(s.begin(), s.end());
    while (s.size() > 1 && s[s.size() - 1] == '0') s.erase(s.size() - 1);
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}