#include <iostream>
using namespace std;
int w[] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1,
           2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
string s;
int main() {
    getline(cin, s);
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ')
            ans++;
        else
            ans += w[s[i] - 'a'];
    }
    cout << ans;
    return 0;
}