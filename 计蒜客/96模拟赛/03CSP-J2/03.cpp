#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
string n;
int k;
long long ans = 1e18;

void dfs(string s, long long cost, int pos) {
    if (cost > ans) return;
    int sum = 0;
    for (int i = 0; i < s.size(); i++) sum += s[i] - '0';
    if (sum == k) {
        ans = min(ans, cost);
        return;
    }
    if (pos < 0) return;
    string t = s;
    long long cc;
    for (int i = 0; i <= 9; i++) {
        cc = (s.size() - pos) * abs(s[pos] - '0' - i);
        t[pos] = i + '0';
        dfs(t, cost + cc, -1);
    }
    cc = (s[pos] - '0') * pow(10, s.size() - pos - 1);
    t[pos] = '0';
    dfs(t, cost + cc, pos - 1);
    cc = ('9' - s[pos]) * pow(10, s.size() - pos - 1);
    t[pos] = '9';
    dfs(t, cost + cc, pos - 1);
}

int main() {
    freopen("game.in", "r", stdin);
    freopen("game.out", "w", stdout);
    cin >> n >> k;
    dfs(n, 0, n.size() - 1);
    cout << ans;
    return 0;
}