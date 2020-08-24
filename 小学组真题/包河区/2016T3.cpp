#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int n, s, c[2005];
string f[2005][2005];

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

string mul(string a, string b) {
    int lc = a.size() + b.size();
    memset(c, 0, sizeof(c));
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < b.size(); j++)
            c[i + j] += (a[i] - '0') * (b[j] - '0');
    for (int i = 0; i < lc; i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    while (lc > 0 && c[lc] == 0) lc--;
    string res;
    for (int i = lc; i >= 0; i--) res.push_back(c[i] + '0');
    return res;
}

int main() {
    cin >> n >> s;
    s /= 2;
    for (int i = 0; i <= 9; i++) f[1][i] = "1";
    for (int i = 2; i <= n; i++)
        for (int j = 0; j <= s; j++) {
            if (9 * i < j) continue;  // i为全为9 都小于j 不符合
            for (int k = 0; k <= 9; k++)
                if (j >= k) f[i][j] = add(f[i][j], f[i - 1][j - k]);
        }
    cout << mul(f[n][s], f[n][s]);
    return 0;
}