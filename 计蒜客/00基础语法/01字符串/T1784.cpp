#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string s;
vector<int> a, r;
int main() {
    int ans = 0;
    cin >> s;
    for (int i = 0; s[i]; i++)
        if (s[i] >= '0' && s[i] <= '9') a.push_back(s[i] - '0');
    int t = 0;
    for (int i = 0; i < a.size(); i++) {
        t = t * 10 + a[i];
        t %= 100007;
    }
    cout << t;
    return 0;
}