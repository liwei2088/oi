#include <cstring>
#include <iostream>
using namespace std;
int n;
string s;
int main() {
    cin >> n >> s;
    for (int i = 0; s[i]; i++) {
        s[i] = (s[i] - 'a' + n) % 26 + 'a';
    }
    cout << s << endl;
    return 0;
}