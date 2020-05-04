#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    getline(cin, s);
    int ans = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ||
            s[i] >= '0' && s[i] <= '9')
            ans++;
    cout << ans;
    return 0;
}