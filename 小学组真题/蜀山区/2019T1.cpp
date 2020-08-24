#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int n;
string f[5005], ans;

string add(string a, string b) {
    string c;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int t = 0;
    for (int i = 0; i < a.size() || i < b.size(); i++) {
        if (i < a.size()) t += a[i] - '0';
        if (i < b.size()) t += b[i] - '0';
        c.push_back(t % 10 + '0');
        t /= 10;
    }
    if (t) c.push_back(t % 10 + '0');
    reverse(c.begin(), c.end());
    return c;
}

int main() {
    cin >> n;
    if (n == 1) {
        cout << "1";
        return 0;
    }
    if (n == 2) {
        cout << "2";
        return 0;
    }
    f[1] = f[2] = "1";
    ans = "2";
    for (int i = 3; i <= n; i++) {
        f[i] = add(f[i - 1], f[i - 2]);
        ans = add(ans, f[i]);
    }
    cout << ans;
    return 0;
}