#include <cstring>
#include <iostream>
using namespace std;
int cnt[26];
string s;
int main() {
    int mx = 0;
    for (int i = 0; i < 4; i++) {
        getline(cin, s);
        int n = s.size();
        for (int i = 0; i < n; i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                cnt[s[i] - 'A']++, mx = max(mx, cnt[s[i] - 'A']);
    }
    for (int i = mx; i >= 1; i--) {
        for (int j = 0; j < 26; j++)
            if (cnt[j] >= i)
                cout << "* ";
            else
                cout << "  ";
        cout << endl;
    }
    for (int i = 0; i < 26; i++) cout << char('A' + i) << " ";
    return 0;
}