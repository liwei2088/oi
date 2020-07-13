#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        if (s.size() % 2 == 1 || s.size() == 0) {
            cout << "No" << endl;
            continue;
        }
        bool f = true;
        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] == 'm' && s[i + 1] == 'q') continue;
            f = false;
            break;
        }
        if (f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}