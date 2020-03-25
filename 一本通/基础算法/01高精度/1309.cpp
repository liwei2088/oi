#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string s;
vector<int> m;
int n;

bool check(vector<int>& v) {
    int l = 0, r = v.size() - 1;
    while (l < r) {
        if (v[l] != v[r]) return false;
        l++, r--;
    }
    return true;
}

void add(vector<int>& a) {
    vector<int> b = a;
    reverse(a.begin(), a.end());
    int la = a.size(), lb = b.size();
    int t = 0;
    for (int i = 0; i < la || i < lb; i++) {
        if (i < la) t += a[i];
        if (i < lb) t += b[i];
        a[i] = t % n;
        t /= n;
    }
    if (t) a.push_back(t);
}

int main() {
    cin >> n >> s;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 'a' - 10;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] -= 'A' - 10;
        else
            s[i] -= '0';
        m.push_back(s[i]);
    }
    int ans = 0;
    while (!check(m)) {
        add(m);
        ans++;
        if (ans > 30) {
            cout << "Impossible";
            return 0;
        }
    }
    cout << ans;
    return 0;
}