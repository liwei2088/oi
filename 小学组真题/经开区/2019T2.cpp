#include <iostream>
using namespace std;
string s1, s2;
int main() {
    cin >> s1 >> s2;
    int ans = 0;
    for (int i = 0; i < s1.size(); i++)
        if (s1[i] >= '0' && s1[i] <= '9' && 
            s2[i] >= '0' && s2[i] <= '9' &&
            s1[i] == s2[i])
            ans++;
    cout << ans;
    return 0;
}