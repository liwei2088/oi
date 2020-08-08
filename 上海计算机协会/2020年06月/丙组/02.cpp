#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int pos = s.find("black");
    while (pos != -1) {
        s = s.replace(pos, 5, "block");
        pos = s.find("black", pos + 1);
    }
    cout << s;
    return 0;
}