#include <cstring>
#include <iostream>
using namespace std;
string s;
int a[128];
int main() {
    getline(cin, s);
    for (int i = 0; s[i]; i++) a[s[i]]++;
    for (int i = 0; i < 128; i++)
        if (a[i] % 2 == 1) {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}