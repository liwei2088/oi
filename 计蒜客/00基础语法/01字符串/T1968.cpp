#include <iostream>
#include <string>
using namespace std;
string s;
int main() {
    while (getline(cin, s)) {
        int pos = s.find("//");
        if (pos == 0)
            cout << endl;
        else if (pos == s.npos)
            cout << s << endl;
        else
            cout << s.substr(0, pos) << endl;
    }
    return 0;
}