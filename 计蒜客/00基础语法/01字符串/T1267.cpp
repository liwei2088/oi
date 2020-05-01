#include <cstring>
#include <iostream>
using namespace std;
string s, t;
int n;
int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        int len = s.size();
        int i, j;
        t.clear();
        for (i = 0, j = 0; i < len; i++, j++) {
            if (s[i] == '_')
                ++i, s[i] -= 32;
            else if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32, t.push_back('_');
            t.push_back(s[i]);
        }
        cout << t << endl;
    }
    return 0;
}