#include <cstring>
#include <iostream>
#include <map>
using namespace std;
string s, t;
int n;
map<string, int> mp;
int main() {
    cin >> n;
    cin >> s;
    for (int i = 0; i < n - 1; i++) {
        t.clear();
        t.push_back(s[i]);
        t.push_back(s[i + 1]);
        mp[t]++;
    }
    int mx = 0;
    map<string, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        if (mx < it->second) {
            t = it->first;
            mx = it->second;
        }
    }
    cout << t;
    return 0;
}