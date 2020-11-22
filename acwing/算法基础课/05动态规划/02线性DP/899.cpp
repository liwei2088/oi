#include <iostream>
using namespace std;
int n, m, f[15][15];
string s[1005];

int check(string a, string b) {
    int la = a.size(), lb = b.size();
    for (int i = 1; i <= la; i++) f[i][0] = i;
    for (int i = 1; i <= lb; i++) f[0][i] = i;
    for (int i = 1; i <= la; i++)
        for (int j = 1; j <= lb; j++)
            if (a[i - 1] == b[j - 1])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] =
                    min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1])) + 1;
    return f[la][lb];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> s[i];
    while (m--) {
        string t;
        int k, ans = 0;
        cin >> t >> k;
        for (int i = 1; i <= n; i++)
            if (check(s[i], t) <= k) ans++;
        cout << ans << endl;
    }
    return 0;
}