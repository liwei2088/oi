#include <cstring>
#include <iostream>
using namespace std;
string s;
int k;
int main() {
    cin >> s;
    cin >> k;
    int n = s.size();
    int t = 1, p = 0;
    for (int i = n - 1; i >= 0; i--) p += (s[i] - '0') * t, t *= 2;
    cout << k * p;
    return 0;
}