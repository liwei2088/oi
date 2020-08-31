#include <iostream>
using namespace std;
string s, t;
int main() {
    while (cin >> t) s += t;
    cout << t.size() << " ";
    int i = 0, cnt = 0, k = 0;
    while (i < s.size()) {
        if (s[i] == k + '0')
            cnt++, i++;
        else
            cout << cnt << " ", cnt = 0, k = !k;
    }
    cout << cnt;
    return 0;
}