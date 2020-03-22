#include <algorithm>
#include <iostream>
using namespace std;
string s, t;
int n;
int word[] = {'0', '1', '2', '3', '4', '5', '6', '7',
              '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int chr2int(char c) {
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    if (c >= 'a' && c <= 'z') return c - 'a' + 10;
    return c - '0';
}

string add(string a, string b) {
    string c;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int la = a.size(), lb = b.size();
    int t = 0, lc = 0;
    for (int i = 0; i < la || i < lb; i++) {
        if (i < la) t += chr2int(a[i]);
        if (i < lb) t += chr2int(b[i]);
        c.push_back(word[t % n]);
        t /= n;
    }
    if (t) c.push_back(word[t]);
    return c;
}

int main() {
    cin >> n >> s;
    int cnt = 0;
    while (1) {
        t = s;
        reverse(t.begin(), t.end());
        if (t == s) {
            cout << cnt;
            return 0;
        }
        s = add(s, t);
        cnt++;
        if (cnt > 30) {
            cout << "Impossible";
            return 0;
        }
    }
    return 0;
}