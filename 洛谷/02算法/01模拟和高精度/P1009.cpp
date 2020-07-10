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

string add(string a, string b) {
    string c;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int la = a.size(), lb = b.size();
    int t = 0;
    for (int i = 0; i < la || i < lb || t != 0; i++) {
        if (i < la) t += a[i] - '0';
        if (i < lb) t += b[i] - '0';
        c.push_back(t % 10 + '0');
        t /= 10;
    }
    reverse(c.begin(), c.end());
    return c;
}

int main() {
    int n;
    string s = "0", t = "1";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        t = mul(t, i);
        s = add(s, t);
    }
    cout << s;
    return 0;
}