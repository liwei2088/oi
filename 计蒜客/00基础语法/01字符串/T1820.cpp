#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int n = s.size();
    if ((s[n - 1] - '0') % 2 == 1)
        cout << "ji";
    else
        cout << "ou";
    return 0;
}