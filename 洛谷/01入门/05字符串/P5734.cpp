#include <cstring>
#include <iostream>
using namespace std;
string s, str;
int main() {
    int q;
    cin >> q;
    cin >> s;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            cin >> str;
            s += str;
            cout << s << endl;
        } else if (t == 2) {
            int a, b;
            cin >> a >> b;
            s = s.substr(a, b);
            cout << s << endl;
        } else if (t == 3) {
            int a;
            cin >> a >> str;
            s = s.insert(a, str);
            cout << s << endl;
        } else if (t == 4) {
            cin >> str;
            int idx = s.find(str);
            if (idx != s.npos)
                cout << idx << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}