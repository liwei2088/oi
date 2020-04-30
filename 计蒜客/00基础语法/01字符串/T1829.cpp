#include <cstring>
#include <iostream>
using namespace std;
int n;
string s;
int main() {
    cin >> n;
    cin >> s;
    int t = 1, ans = 0;
    for (int i = n - 1; i >= 0; i--) ans += t * (s[i] - '0'), t *= 2;
    cout << ans;
    return 0;
}