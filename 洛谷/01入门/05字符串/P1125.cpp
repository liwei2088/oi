#include <cstring>
#include <iostream>
using namespace std;
string s;
int st[26];
bool isprime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int t;
    cin >> s;
    int mx = 0, mi = 100;
    for (int i = 0; s[i]; i++) st[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        if (mx < st[i])
            mx = st[i];
        else if (st[i] && mi > st[i])
            mi = st[i];
    if (isprime(mx - mi))
        cout << "Lucky Word" << endl << mx - mi << endl;
    else
        cout << "No Answer" << endl << "0" << endl;
    return 0;
}