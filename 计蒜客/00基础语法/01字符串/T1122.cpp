#include <cstring>
#include <iostream>
using namespace std;
string s, smx, smi;
int mx = 0, mi = 110;
int main() {
    getline(cin, s);
    int n = s.size();
    int i = 0, j = 0;
    while (i < n) {
        while (j < n && s[j] != ' ' && s[j] != ',') j++;
        if (i < j) {
            if (mx < j - i) smx = s.substr(i, j - i), mx = j - i;
            if (mi > j - i) smi = s.substr(i, j - i), mi = j - i;
        }
        i = ++j;
    }
    cout << smx << endl << smi << endl;
    return 0;
}