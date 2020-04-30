#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    long long s1 = 1, s2 = 1;
    for (int i = 0; a[i]; i++) s1 *= a[i] - 'A' + 1;
    for (int i = 0; b[i]; i++) s2 *= b[i] - 'A' + 1;
    if (s1 % 47 == s2 % 47)
        cout << "GO";
    else
        cout << "STAY";
    return 0;
}