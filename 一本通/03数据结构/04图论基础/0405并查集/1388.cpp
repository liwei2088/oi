#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
map<string, string> p;

string find(string x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    string t, fa, ch, q;
    int tt = 0;
    while (cin >> t && t[0] != '$') {
        if (t[0] == '#') {
            fa = t.substr(1);
            if (p[fa] == "") p[fa] = fa;
        } else if (t[0] == '+') {
            ch = t.substr(1);
            if (p[ch] == "") p[ch] = ch;
            string x = find(fa), y = find(ch);
            if (x != y) p[y] = x;
        } else if (t[0] == '?') {
            q = t.substr(1);
            cout << q << " " << find(q) << endl;
        }
    }

    return 0;
}