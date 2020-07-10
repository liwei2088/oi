#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

string mul(string a, int b) {
    string c;
    reverse(a.begin(), a.end());
    int t = 0;
    for (int i = 0; i < a.size() || t != 0; i++) {
        if (i < a.size()) t += (a[i] - '0') * b;
        c.push_back(t % 10 + '0');
        t /= 10;
    }
    while (c.size() > 1 && c[c.size() - 1] == '0') c.erase(c.size() - 1);
    reverse(c.begin(), c.end());
    return c;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        string s = "1";
        cin >> n >> a;
        for (int i = 1; i <= n; i++) {
            s = mul(s, i);
        }
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] - '0' == a) cnt++;
        cout << cnt << endl;
    }
    return 0;
}