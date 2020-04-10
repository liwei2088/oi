#include <iostream>
using namespace std;
const int key[] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1,
                   2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
int main() {
    string s;
    getline(cin, s);
    int ans = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ')
            ans++;
        else
            ans += key[s[i] - 'a'];
    }
    cout << ans;
    return 0;
}