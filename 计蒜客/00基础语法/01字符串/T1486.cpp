#include <cstring>
#include <iostream>
using namespace std;
const int d[] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1,
                 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
string s;
int main() {
    int ans = 0;
    getline(cin, s);
    for (int i = 0; s[i]; i++)
        if (s[i] == ' ' || s[i] == '*')
            ans++;
        else if (s[i] == '#')
            ans += 2;
        else
            ans += d[s[i] - 'a'];
    cout << ans;
    return 0;
}