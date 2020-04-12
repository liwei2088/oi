#include <cstring>
#include <iostream>
using namespace std;
string s, mxs, mis;
int main() {
    int mx = 0, mi = 100;
    getline(cin, s);
    int i = 0, j = 0;
    while (s[i]) {
        while (s[j] != ' ' && s[j] != ',' && s[j]) j++;
        //注意可能有连续空格
        if (j > i && j - i > mx) mx = j - i, mxs = s.substr(i, j - i);
        if (j > i && j - i < mi) mi = j - i, mis = s.substr(i, j - i);
        j++;
        i = j;
    }
    cout << mxs << endl << mis;
    return 0;
}