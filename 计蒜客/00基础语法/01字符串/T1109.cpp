#include <iostream>
using namespace std;
string s;
char a, b;
int main() {
    cin >> s;
    cin >> a >> b;
    for (int i = 0; s[i]; i++)
        if (s[i] == a) s[i] = b;
    cout << s;
    return 0;
}
