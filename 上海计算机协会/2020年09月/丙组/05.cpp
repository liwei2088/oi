#include <algorithm>
#include <iostream>
using namespace std;
string s;
int n;
const int MOD = 1e9 + 9;
string add(string a, string b) {
    string c;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int t = 0;
    for (int i = 0; i < a.size() || i < b.size(); i++) {
        if (i < a.size()) t += a[i] - '0';
        if (i < b.size()) t += b[i] - '0';
        c.push_back(t % 2 + '0');
        t = t / 2;
    }
    if (t) c.push_back(t % 2 + '0');
    reverse(c.begin(), c.end());
    return c;
}

string xx(string a, string b) {
    string c;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < a.size() || i < b.size(); i++) {
        int x, y;
        if (i < a.size())
            x = a[i] - '0';
        else
            x = 0;
        if (i < b.size())
            y = b[i] - '0';
        else
            y = 0;
        c.push_back(x ^ y + '0');
    }
    while (c.size() > 1 && c[c.size() - 1] == '0') c.erase(c.size() - 1);
    reverse(c.begin(), c.end());
    return c;
}

int main() {
    cin >> n;
    for (int i = 1; i < n; i++) s += "1";
    string x = "0", x2, x3;
    int ans = 0;
    while (x <= s) {
        x2 = x;
        x2.push_back('0');
        x3 = add(x2, x);
        if (xx(xx(x, x2), x3) == "0") ans = (ans + 1) % MOD;
        x = add(x, "1");
    }
    cout << ans;
    return 0;
}