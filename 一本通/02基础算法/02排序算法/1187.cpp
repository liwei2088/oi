#include <iostream>
using namespace std;
int a[26];
int main() {
    char ch;
    while (cin >> ch) a[ch - 'a']++;
    int ans = 0;
    for (int i = 0; i < 26; i++)
        if (ans < a[i]) {
            ans = a[i];
            ch = i + 'a';
        }
    cout << ch << " " << ans;
    return 0;
}