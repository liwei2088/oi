#include <algorithm>
#include <iostream>
using namespace std;
string f[1005];

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
    int m, n;
    cin >> m >> n;
    f[m] = "1", f[m + 1] = "1";
    if (m == n || m + 1 == n) {
        cout << "1";
        return 0;
    }
    for (int i = m + 2; i <= n; i++) f[i] = add(f[i - 1], f[i - 2]);
    cout << f[n];
    return 0;
}