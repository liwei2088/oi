#include <iostream>
using namespace std;
string s;
bool st[105];
int n;
int main() {
    cin >> n;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'V' && s[i + 1] == 'K') {
            ans++;
            st[i] = true;
            st[i + 1] = true;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        //注意 只有 VV 和 KK 可以变成 VK
        if (!st[i] && !st[i + 1] && (s[i] == s[i + 1])) {
            ans++;
            break;
        }
    }
    cout << ans;
    return 0;
}