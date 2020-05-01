#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    int k = 0;
    while (getline(cin, s)) {
        for (int i = 0; s[i]; i++) {
            if (s[i] != '"') {
                cout << s[i];
                continue;
            }
            if (k == 0)
                cout << "``", k = 1;
            else
                cout << "''", k = 0;
        }
        cout << endl;
    }
    return 0;
}