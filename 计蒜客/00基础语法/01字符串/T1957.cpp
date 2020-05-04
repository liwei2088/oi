#include <cstring>
#include <iostream>
using namespace std;
string s;
int a, b, c, d;
int main() {
    getline(cin, s);
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            a++;
        else if (s[i] >= '0' && s[i] <= '9')
            b++;
        else if (s[i] == ' ')
            c++;
        else
            d++;
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}