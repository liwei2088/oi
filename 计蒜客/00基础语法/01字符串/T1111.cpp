#include <iostream>
using namespace std;
string s;
int main() {
    getline(cin, s);
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] = (s[i] - 'A' - 5 + 26) % 26 + 'A';
    cout << s;
    return 0;
}