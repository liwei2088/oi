#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int n = s.size();
    int i = 0, j = 0;
    while (i < n) {
        while (j < n && toupper(s[i]) == toupper(s[j])) j++;
        cout << "(" << char(toupper(s[i])) << "," << j - i << ")";
        i = j;
    }
    return 0;
}