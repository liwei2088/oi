#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int cnt = 0, n = 0;
    for (int i = 0; i < s.size(); i++) {
        if (!((s[i] >= '0' && s[i] <= '9') || s[i] == '.' || s[i] == '+' ||
              s[i] == '-')) {
            cout << "Invalid";
            return 0;
        }
        if (i != 0 && (s[i] == '-' || s[i] == '+')) {
            cout << "Invalid";
            return 0;
        }
        if (s[i] == '.') {
            cnt++;
            if (cnt > 1) {
                cout << "Invalid";
                return 0;
            }
        }
        if (s[i] >= '0' && s[i] <= '9') n++;
    }
    if (n == 0)
        cout << "Invalid";
    else
        cout << "Valid";
    return 0;
}