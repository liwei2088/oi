#include <iostream>
using namespace std;
string a, b, c, d;
int main() {
    cin >> a >> b;
    c = a + a;
    d = b + b;
    if (c.find(b) != c.npos)
        cout << "true";
    else if (d.find(a) != d.npos)
        cout << "true";
    else
        cout << "false";
    return 0;
}