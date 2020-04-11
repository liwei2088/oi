#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

void work(string& s, int pos) {
    string x = s.substr(0, pos);
    while (x.size() > 1 && x[x.size() - 1] == '0') x.erase(x.size() - 1);
    reverse(x.begin(), x.end());
    string y;
    if (pos == s.size()) {
        cout << x << endl;
        return;
    }
    y = s.substr(pos + 1);
    if (s[pos] == '.') {
        reverse(y.begin(), y.end());
        while (y.size() > 1 && y[y.size() - 1] == '0') y.erase(y.size() - 1);
    } else {
        while (y.size() > 1 && y[y.size() - 1] == '0') y.erase(y.size() - 1);
        reverse(y.begin(), y.end());
    }
    cout << x << s[pos] << y << endl;
}

int main() {
    string s;
    cin >> s;
    int pos = s.size();
    for (int i = 0; s[i]; i++)
        if (s[i] < '0' || s[i] > '9') {
            pos = i;
            break;
        }
    work(s, pos);
    return 0;
}