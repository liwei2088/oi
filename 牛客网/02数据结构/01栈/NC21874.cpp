#include <cstring>
#include <iostream>
using namespace std;
int q[55], tt;
string s;
int main() {
    cin >> s;
    bool f = true;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'a')
            q[++tt] = s[i];
        else if (s[i] == 'b') {
            if (tt && q[tt] == 'a')
                tt--;
            else
                f = false;
        }
        if (!f) break;
    }
    if (!tt && f)
        cout << "Good";
    else
        cout << "Bad";
}