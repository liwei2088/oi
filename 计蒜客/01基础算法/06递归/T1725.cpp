#include <algorithm>
#include <iostream>
using namespace std;

int dfs(string s) {
    if (s.size() == 1) return 1;
    string ls = s.substr(0, s.size() / 2);
    string rs = s.substr(s.size() / 2);
    reverse(rs.begin(), rs.end());
    if (ls == rs)
        return dfs(ls);
    else
        return s.size();
}

int main() {
    string s;
    cin >> s;
    cout << dfs(s);
    return 0;
}