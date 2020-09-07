#include <iostream>
using namespace std;
string s;
int n;
int main() {
    cin >> n;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n && s[i] == s[j]) j++;
        ans = max(ans, j - i);
        i = j - 1;
    }
    cout << ans;
    return 0;
}