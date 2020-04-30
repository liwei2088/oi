#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    if (a.find(b) != a.npos)
        cout << b << " is substring of " << a;
    else if (b.find(a) != b.npos)
        cout << a << " is substring of " << b;
    else
        cout << "No substring";
    return 0;
}