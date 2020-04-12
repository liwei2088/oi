#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'A')
            s[i] = 'T';
        else if (s[i] == 'G')
            s[i] = 'C';
        else if (s[i] == 'T')
            s[i] = 'A';
        else if (s[i] == 'C')
            s[i] = 'G';
    }
    cout << s;
    return 0;
}