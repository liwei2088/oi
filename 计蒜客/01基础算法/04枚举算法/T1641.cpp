#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'V' && s[i + 1] == 'K') ans++;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'V') {
            if (s[i - 1] == 'V' && s[i + 1] != 'K') {
                ans++;
                break;
            }
        } else if (s[i] == 'K') {
            if (s[i - 1] != 'V' && s[i + 1] == 'K') {
                ans++;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}