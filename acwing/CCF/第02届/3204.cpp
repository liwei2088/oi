#include <cstdio>
#include <iostream>
using namespace std;

string get(string s) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    return s;
}

int main() {
    string s, t, tt;
    int n, m;
    cin >> s;
    cin >> n;
    if (n == 0) s = get(s);
    cin >> m;
    while (m--) {
        cin >> t;
        tt = t;
        if (n == 0) tt = get(t);
        if (tt.find(s) != s.npos) cout << t << endl;
    }
    return 0;
}