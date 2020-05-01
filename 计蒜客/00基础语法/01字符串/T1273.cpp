#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    while (cin >> s) {
        int n = s.size();
        int i = 0, j = 0;
        bool f = false;
        while (i < n) {
            while (j < n && s[i] == s[j]) j++;
            if ((j - i) % 2 == 0) {
                f = true;
                break;
            }
            i = j;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}