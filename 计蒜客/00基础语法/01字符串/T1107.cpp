#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    getline(cin, s);
    int n = s.size();
    char t = s[0];
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            s[i] = s[i] + t;
        else
            s[i] = s[i] + s[i + 1];
    }
    cout << s;
    return 0;
}