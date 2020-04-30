#include <cstring>
#include <iostream>
using namespace std;
string s1, s2;
int a[10], b[10];
int main() {
    cin >> s1 >> s2;
    for (int i = 0; s1[i]; i++) a[s1[i] - '0']++;
    for (int i = 0; s2[i]; i++) b[s2[i] - '0']++;
    bool f = false;
    for (int i = 0; i < 10; i++)
        if (a[i] > 0 && b[i] > 0) f = true, cout << i << " ";
    if (f == false) cout << "-1";
    return 0;
}