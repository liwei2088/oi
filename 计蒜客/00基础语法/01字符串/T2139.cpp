#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    int sum = 0;
    cin >> s;
    int n = s.size();
    for (int i = 0, j = 1; i < n - 1; i++)
        if (s[i] >= '0' && s[i] <= '9') sum += (s[i] - '0') * j, j++;
    char c = 'X';
    if (sum % 11 < 10) c = sum % 11 + '0';
    if (s[n - 1] == c)
        cout << "Right";
    else
        s[n - 1] = c, cout << s;
    return 0;
}