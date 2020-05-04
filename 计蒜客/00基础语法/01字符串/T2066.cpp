#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string w, a;
int main() {
    getline(cin, w);
    getline(cin, a);
    w = ' ' + w + ' ';
    a = ' ' + a + ' ';
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(w.begin(), w.end(), w.begin(), ::tolower);
    int pos = 0;
    bool first = true;
    int cnt = 0, idx = 0;
    pos = a.find(w);
    while (pos != -1) {
        if (first) idx = pos, first = false;
        cnt++;
        pos = a.find(w, pos + 1);
    }
    if (cnt == 0)
        cout << "-1";
    else
        cout << cnt << " " << idx;
    return 0;
}