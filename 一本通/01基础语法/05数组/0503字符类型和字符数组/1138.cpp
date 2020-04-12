#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
    return 0;
}