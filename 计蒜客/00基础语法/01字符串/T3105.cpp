#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int t;
string s;
int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        string t = s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i = 0, j, n = s.size(), idx = 0, mx = 0;
        while (i < n) {
            j = i + 1;
            while (j < n && ((s[j - 1] - s[j] + 26) % 26 == 1 ||
                             (s[j - 1] - s[j] + 26) % 26 == 25))
                j++;
            if (j - i > mx) {
                mx = j - i;
                idx = i;
            }
            i = j;
        }
        cout << t.substr(idx, mx) << endl;
    }
    return 0;
}