#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
map<string, int> mp;
int n;
string name[1000];
int main() {
    cin >> n;
    int mx = 0;
    string ans;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> name[i] >> x;
        mp[name[i]] += x;
        if (mx < mp[name[i]]) {
            ans = name[i];
            mx = mp[name[i]];
        }
    }
    cout << ans;
    return 0;
}