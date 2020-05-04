#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string s;

string sub(string t, int x) {
    string c;
    string p;
    while (x) {
        p.push_back(x % 10 + '0');
        x /= 10;
    }
    reverse(p.begin(), p.end());
    int n = t.size(), m = p.size();
    if (m > n || (n == m && p > t)) swap(p, t), swap(n, m);
    reverse(t.begin(), t.end());
    reverse(p.begin(), p.end());
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (i < n) k = (t[i] - '0') - k;
        if (i < m) k = k - (p[i] - '0');
        c.push_back((k + 10) % 10 + '0');
        if (k < 0)
            k = 1;
        else
            k = 0;
    }
    while (c.size() > 1 && c[c.size() - 1] == '0') c.erase(c.size() - 1);
    reverse(c.begin(), c.end());
    return c;
}

int mod(string t, int x) {
    int r = 0;
    for (int i = 0; i < t.size(); i++) {
        r = r * 10 + (t[i] - '0');
        r = r % x;
    }
    return r;
}

int main() {
    cin >> s;
    int n = s.size();
    int k = s[n - 1] - '0';
    s.erase(n - 1);
    k = k * 5;
    s = sub(s, k);
    if (mod(s, 17) == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}