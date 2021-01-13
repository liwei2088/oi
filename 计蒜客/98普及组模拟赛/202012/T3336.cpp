#include <cstdio>
#include <iostream>
using namespace std;
int n;
string s;
int main() {
    cin >> n;
    cin >> s;
    int ans = 1e9;
    for (int i = 0; i < s.size(); i++) {
        int j = i;
        while (j < s.size() && s[j] != 'l') j++;
        int k = j + 1;
        while (k < s.size() && s[k] != 'o') k++;
        int u = k + 1;
        while (u < s.size() && s[u] != 'v') u++;
        int v = u + 1;
        while (v < s.size() && s[v] != 'e') v++;
        if (v < s.size()) {
            ans = min(ans, v - j + 1);
        }
        i = j;
    }
    cout << ans;
    return 0;
}