#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int mx = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            mx = max(mx, s[i] - '0');
        else
            mx = max(mx, s[i] - 'A' + 10);
    }
    cout << mx + 1;
    return 0;
}