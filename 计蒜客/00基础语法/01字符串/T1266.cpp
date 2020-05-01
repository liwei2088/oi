#include <cstring>
#include <iostream>
using namespace std;
string s;
int n;
int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        int ca = 0, cl = 0;
        bool f = true;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] == 'A') ca++;
            if (i + 2 < len && s[i] == 'L' && s[i + 1] == 'L' &&
                s[i + 2] == 'L')
                cl++;
            if (ca > 1 || cl > 0) {
                f = false;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}