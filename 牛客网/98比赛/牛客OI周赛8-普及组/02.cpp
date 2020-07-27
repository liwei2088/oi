#include <iostream>
using namespace std;
string s[1005], t[105];

//双指针实现子序列判断
bool check(string a, string b) {
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            j++;
        }
        i++;
    }
    if (j == b.size())
        return true;
    else
        return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> s[i];
    for (int i = 1; i <= m; i++) cin >> t[i];
    for (int i = 1; i <= n; i++) {
        int ans = 0;
        for (int j = 1; j <= m; j++)
            if (check(s[i], t[j])) ans++;
        cout << ans << endl;
    }
    return 0;
}