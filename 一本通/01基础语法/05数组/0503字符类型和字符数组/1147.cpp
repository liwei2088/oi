#include <cstring>
#include <iostream>
using namespace std;
string s, ans;
int n, t;
int main() {
    int mx = 0;
    cin >> n;
    while (n--) {
        cin >> t >> s;
        if (mx < t) ans = s, mx = t;
    }
    cout << ans;
    return 0;
}