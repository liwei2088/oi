#include <algorithm>
#include <iostream>
using namespace std;
string s[105];
int main() {
    int n = 1;
    while (cin >> s[n]) n++;
    sort(s + 1, s + n);
    int m = unique(s + 1, s + n) - (s + 1);
    for (int i = 1; i <= m; i++) cout << s[i] << endl;
    return 0;
}