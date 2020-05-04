#include <cstring>
#include <iostream>
#include <sstream>
using namespace std;
int n;
char op[2], ch;
string s;
int a, b, c;
int main() {
    cin >> n;
    getchar();
    while (n--) {
        getline(cin, s);
        stringstream sstream(s);
        if (s[0] >= 'a' || s[0] == 'b' || s[0] == 'c')
            sstream >> op >> a >> b;
        else
            sstream >> a >> b;
        if (op[0] == 'a')
            c = a + b, ch = '+';
        else if (op[0] == 'b')
            c = a - b, ch = '-';
        else if (op[0] == 'c')
            c = a * b, ch = '*';
        sstream.clear();
        sstream << a << ch << b << "=" << c;
        string ans = sstream.str();
        cout << ans << endl << ans.size() << endl;
    }
    return 0;
}