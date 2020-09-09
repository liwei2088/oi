#include <iostream>
using namespace std;
string s;
int tot[10];
int main() {
    cin >> s;
    int mx = 0;
    for (int i = 0; i < s.size(); i++) {
        tot[s[i] - '0']++;
        mx = max(mx, tot[s[i] - '0']);
    }
    for (int i = 0; i <= 9; i++)
        if (tot[i] == mx) cout << i << endl;
    return 0;
}