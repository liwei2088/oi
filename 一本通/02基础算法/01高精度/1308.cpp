#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string x, y;
bool cmpstr(string a, string b) {
    if (a.size() != b.size())
        return a.size() > b.size();
    else
        return a >= b;
}

string sub(string a, string b) {
    string c;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int t = 0;
    for (int i = 0; i < a.size(); i++) {
        t += a[i] - '0';
        if (i < b.size()) t -= b[i] - '0';
        c.push_back((t + 10) % 10 + '0');
        if (t < 0)
            t = -1;
        else
            t = 0;
    }
    while (c.size() > 1 && c[c.size() - 1] == '0') c.erase(c.size() - 1);
    reverse(c.begin(), c.end());
    return c;
}

void div(string a, string b) {
    string t, c;
    bool f = false;
    for (int i = a.size() - b.size() + 1; i >= 1; i--) {
        t = b;
        for (int j = 1; j < i; j++) t.push_back('0');
        int k = 0;
        while (cmpstr(a, t)) {
            k++;
            a = sub(a, t);
        }
        if (!f && k != 0) f = true;
        if (f) c.push_back(k + '0');
    }
    cout << c << endl << a << endl;
}

int main() {
    cin >> x >> y;
    div(x, y);
    return 0;
}