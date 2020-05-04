#include <cstring>
#include <iostream>
using namespace std;
string s;
const char w[] = {1, 0, 0, 0, 0, 0, 1, 0, 2, 1};
int main() {
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) ans += w[s[i] - '0'];
    cout << ans;
    return 0;
}