#include <cstring>
#include <iostream>
using namespace std;
string a, b;
bool c[128];
int main() {
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; b[i]; i++) c[b[i]] = true;
    for (int i = 0; a[i]; i++)
        if (!c[a[i]]) cout << a[i];
    return 0;
}