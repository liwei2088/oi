#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s, w;
int main() {
    int ans = 0, cnt = 0;
    getline(cin, w);
    getline(cin, s);
    w = ' ' + w + ' ';
    s = ' ' + s + ' ';
    transform(w.begin(), w.end(), w.begin(), ::toupper);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int pos = s.find(w);
    bool first = true;
    while (pos != -1) {
        cnt++;
        if (first) ans = pos, first = false;
        pos = s.find(w, pos + 1);
    }
    if (cnt == 0)
        cout << "-1";
    else
        cout << cnt << " " << ans;
    return 0;
}